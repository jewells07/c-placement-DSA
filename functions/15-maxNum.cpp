#include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }

    if (b > c && b > a)
    {
        return b;
    }

    else
    {
        return c;
    }
}

int min(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }

    if (b < c && b < a)
    {
        return b;
    }

    else
    {
        return c;
    }
}

int main()
{
    int a, b, c, maxNum, minNum;
    cin >> a >> b >> c;
    maxNum = max(a, b, c);
    minNum = min(a, b, c);
    cout << maxNum << " It Maximum" << endl;
    cout << minNum << " It Minimum" << endl;

    return 0;
}