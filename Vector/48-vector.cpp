#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "1st way " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << "2nd way " << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "3rd way and UseFul " << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << endl;
    v.pop_back(); // 1 2

    vector<int> v2(3, 50);
    // 50 50 50

    swap(v, v2);

    for (auto element : v)
    {
        cout << element << endl;
    }

    for (auto element : v2)
    {
        cout << element << endl;
    }

    cout << "\nSort" << endl;
    sort(v.begin(), v.end());
    for (auto element : v2)
    {
        cout << element << endl;
    }

    return 0;
}