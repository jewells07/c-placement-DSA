#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Running Inertion Sort..." << endl;
    int key, j;
    // Loop for passes
    for (int i = 0; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        // Loop for each pass
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}