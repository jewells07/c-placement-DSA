#include <iostream>
using namespace std;

int knapSack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapSack(value, wt, n - 1, W);
    }
    int k1 = knapSack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1];
    int k2 = knapSack(value, wt, n - 1, W);
    return max(k1, k2);
}

int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;
    cout << knapSack(value, wt, 3, W) << endl;
    return 0;
}