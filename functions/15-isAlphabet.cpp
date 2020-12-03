#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char str;
    cin >> str;

    if (isalpha(str))
    {
        cout << str << " It is Alphabet (InBuilt Function)" << endl;
    }
    else
    {
        cout << str << " It is Not Alphabet (InBuilt Function)" << endl;
    }

    if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
    {
        cout << str << " It is Alphabet" << endl;
    }

    else
    {
        cout << str << " It is Not Alphabet" << endl;
    }
    return 0;
}