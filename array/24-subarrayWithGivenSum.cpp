#include <iostream>
using namespace std;

int main()
{
    int n, S = 12;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, f = 0, r = 0, sum = 0;
    while (r <= n)
    {
        if (sum == S)
        {
            cout << "Sum is present at position " << f + 1 << " to " << r << endl;
            break;
        }
        else if (sum > S)
        {
            sum -= a[f];
            f++;
        }
        else
        {
            sum += a[i];
            r++;
        }
        i++;
    }
    return 0;
}