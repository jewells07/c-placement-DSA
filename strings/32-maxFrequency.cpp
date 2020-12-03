#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s = "dskfjdafdslkdasgrezzzz";

    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    // example (b - a) = 1 , so freq[1] = 1 and so on
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    // maxF = 4   ans = d
    cout << maxF << " " << ans << endl;

    return 0;
}