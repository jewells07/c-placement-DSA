#include "bits/stdc++.h"
using namespace std;
// Matrix is sorted

int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Brute Force Approach => linearSearch
    bool foundlinearSearch = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == target)
                foundlinearSearch = true;
        }
    }
    if (foundlinearSearch)
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;

    // Binary Search Approach
    int r = 0, c = m - 1;
    bool found = false;
    while (r < n)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    return 0;
}