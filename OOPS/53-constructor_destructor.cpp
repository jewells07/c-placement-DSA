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

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void printInfo()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }
};

int main()
{
    student a("Jewells", 22, 0);
    a.printInfo();
    student b;

    // student c(a); One of way of copy constructor
    student c = a;
    return 0;
}