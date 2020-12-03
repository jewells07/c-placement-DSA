#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str1(5, 'n'); // nnnnn
    string str2 = "GoodBoy";
    cout << str1 << endl;
    cout << str2 << endl;

    string str3;
    getline(cin, str3);
    // cin>>str3; //It will take only one word not space
    cout << str3 << endl;

    string s1 = "fam";
    string s2 = "ily";

    cout << s1 + s2 << endl; // This will only join two string

    // s1 = s1 + s2;       // this will append
    s1.append(s2);      // this will append
    cout << s1 << endl; // family

    cout << s1[1] << endl;

    string abc = "sadd sdadannfs dsfsnkfdsfs";
    abc.clear();
    cout << abc << endl; // Empty

    string s3 = "abc";
    string s4 = "abc";
    // if (!s4.compare(s3)) Also we can do this way
    if (s4.compare(s3) == 0)
    {
        cout << "String are equal" << endl;
    }

    string s5 = "abc";
    cout << s5 << endl;
    s5.clear();
    if (s5.empty())
        cout << "String is empty" << endl;

    string s6 = "nincompoop";
    cout << s6.find("poop") << endl; // 6
    s6.erase(3, 2);
    cout << s6 << endl; // ninmpoop

    string s7 = "nincompoop";
    cout << s7.size() << endl;   // 10
    cout << s7.length() << endl; // 10
    s7.insert(2, "lol");
    cout << s7 << endl; // nilolncompoop

    for (int i = 0; i < s7.length(); i++)
    {
        cout << s7[i] << endl;
    }

    string s8 = "nincompoop";
    string s9 = s8.substr(6, 4);
    cout << s9 << endl; // poop

    string s10 = "777";
    int x = stoi(s10);
    cout << x + 2 << endl; // 779 (integer)
    int y = 777;
    cout << to_string(x) + "2" << endl; // 7772 (string)

    string s11 = "zyx";
    sort(s11.begin(), s11.end());
    cout << s11 << endl; // xyz

    return 0;
}