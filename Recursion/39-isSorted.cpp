#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = isSorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << isSorted(arr, 7) << endl; // 1 => true
    return 0;
}