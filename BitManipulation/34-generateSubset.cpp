#include <iostream>
using namespace std;

void subSets(int arr[], int n)
{
    // It will go 2 power n (1 << n)
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    subSets(arr, 4);

    return 0;
}