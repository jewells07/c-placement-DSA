#include <iostream>
using namespace std;

int main()
{
    bool flag = false;
    int n, m, x;
    cout << "Enter Number of Rows ";
    cin >> n;
    cout << "Enter Number of Columns ";
    cin >> m;
    float arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter Number to find" << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << j << endl;
                flag = true;
            }
        }
    }

    if (flag != false)
    {
        cout << "Element Found\n";
    }
    else
    {
        cout << "Element Not Found\n";
    }

    return 0;
}