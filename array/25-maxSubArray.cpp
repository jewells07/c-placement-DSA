#include <iostream>
#include <climits>
using namespace std;

void bruteForceApproach(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // cout<<arr[k]<<" ";
            }
            // cout<<endl;
            maxSum = max(maxSum, sum);
        }
    }
    cout << "bruteForceApproach " << maxSum << endl;
}
void cumulativeApproach(int arr[], int n)
{
    int currSum[n + 1];
    currSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i - 1] + arr[i - 1];
    }

    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    cout << "cumulativeApproach " << maxSum << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bruteForceApproach(arr, n);
    cumulativeApproach(arr, n);

    return 0;
}