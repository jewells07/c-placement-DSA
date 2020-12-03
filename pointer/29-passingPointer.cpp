#include <iostream>
using namespace std;

void increment(int a)
{
    a++;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int c = 2;
    increment(c);
    cout << c << endl; // 2 will not change

    // Example of Pointer
    int a = 2, b = 4;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr, bptr);
    cout << a << " " << b << endl; // 4 2

    // OR we can do
    swap(&a, &b);
    cout << a << " " << b << endl; // 4 2
    return 0;
}