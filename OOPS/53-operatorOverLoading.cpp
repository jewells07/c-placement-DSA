#include <iostream>
using namespace std;

class student
{
    // Private
    string name;

public:
    int age;
    bool gender;

    // Default Constructor
    student()
    {
        cout << "Default constructor" << endl;
    }

    // Parameterised Constructor
    student(string s, int a, int g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }

    // Copy Constructor
    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    student a("Jewells", 22, 0);
    student b("Jackie", 21, 1);

    // student c(a); One of way of copy constructor
    student c = a;

    if (c == a)
    {
        cout << "c and a Same" << endl;
    }
    if (b == a)
    {
        cout << "b and a Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}