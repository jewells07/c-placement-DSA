#include <iostream>
using namespace std;

int isPowerOf2(int n)
{
    cout << n << endl;
    cout << (n & n - 1) << endl;
    cout << !(n & n - 1) << endl;
    return (n && !(n & n - 1));
}

int main()
{
    cout << isPowerOf2(16) << endl; // 1 -> true
    return 0;
}