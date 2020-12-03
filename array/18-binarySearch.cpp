#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {45, 46, 59, 67, 79, 80, 85, 92, 99, 100};
    int key;

    cin >> key;
    cout << "Index " << binarySearch(arr, 10, key) << endl;
    return 0;
}