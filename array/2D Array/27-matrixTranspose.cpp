#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int n = sizeof A / sizeof A[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //    Swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    // Print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}