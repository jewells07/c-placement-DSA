#include <iostream>
using namespace std;

void isEligible(int n)
{
    if (n > 18)
    {
        cout << "Your Eligible for Voting" << endl;
    }
    else
    {
        cout << "Your Not Eligible for Voting" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    isEligible(n);
    return 0;
}