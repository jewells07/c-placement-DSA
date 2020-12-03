#include <iostream>
#include <climits>
using namespace std;

void KadanesApproach(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << "KadanesApproach " << maxSum << endl;
}

int main()
{
    int n;
    cout << "Enter number of element" << endl;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " Number" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    KadanesApproach(arr, n);

    return 0;
}