#include <bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n)
{
    string ans = "";
    int x = 1;
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int lasDigit = n / x;
        n -= lasDigit * x;
        x /= 16;

        if (lasDigit <= 9)
        {
            ans = ans + to_string(lasDigit);
        }

        else
        {
            char c = 'A' + lasDigit - 10;
            ans.push_back(c);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToHexadecimal(n) << endl;
    return 0;
}