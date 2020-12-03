#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "abcDEfg";

    // Convert Upper Case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << str << endl;

    // Convert Lower Case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout << str << endl;

    // InBuild
    string str2 = "FadDsdksd";
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    cout << str2 << endl;
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << str2 << endl;
    return 0;
}