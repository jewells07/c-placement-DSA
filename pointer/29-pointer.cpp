#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int *aptr = &a;

    // cout << aptr << endl;
    // aptr++;
    // cout << aptr << endl;

    // Pointer in Arrrays
    int arr[] = {10, 20, 30};
    cout << *arr << endl; // 10

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
    // 10 20 30

    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
        // arr++; //Illegal
    }
    // 10 20 30

    // Pointer to Pointer
    int b = 10;
    int *ptrb;
    ptrb = &b;

    cout << *ptrb << endl; // 10

    int **q = &ptrb;

    cout << *q << endl;  // Address of pointer ptrv
    cout << **q << endl; // Address of value 10

    return 0;
}