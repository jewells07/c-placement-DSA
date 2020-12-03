#include <iostream>
using namespace std;

string removeDup(string s)
{
    //  Base Case
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    // It will work on continuous duplicates elements => aaabbbccc
    //  It will not work on => aaabbbbcccbb
    cout << removeDup("aaaabbbeeecdddd");
    return 0;
}