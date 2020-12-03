#include <iostream>
using namespace std;

void reverseString(string s)
{
    //  Base Case
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverseString(ros);
    cout << s[0];
}

int main()
{
    string s = "binod";
    reverseString(s);
    return 0;
}