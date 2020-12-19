#include <iostream>
using namespace std;

//********* Function overloading
// class A
// {
// public:
//     void fun()
//     {
//         cout << "I am a function with no arguments" << endl;
//     }

//     void fun(int x)
//     {
//         cout << "I am a function with int arguments" << endl;
//     }

//     void fun(double x)
//     {
//         cout << "I am a function with double arguments" << endl;
//     }
// };

// int main()
// {
//     A obj;
//     obj.fun();    // I am a function with no arguments
//     obj.fun(4);   // I am a function with int arguments
//     obj.fun(6.2); // I am a function with double arguments
//     return 0;
// }

//********* Operator overloading
// class Complex
// {
// private:
//     int real, imag;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }
//     Complex operator+(Complex const &obj)
//     {
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }

//     void display()
//     {
//         cout << real << " + i" << imag << endl;
//     }
// };

// int main()
// {
//     Complex c1(12, 7), c2(6, 7);
//     Complex c3 = c1 + c2;
//     c3.display();

//     return 0;
// }

//********* Function Overriding

class Base
{
public:
    virtual void print()
    {
        cout << "This is Base class's print function" << endl;
    }
    void display()
    {

        cout << "This is Base class's display function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "This is Derived class's print function" << endl;
    }
    void display()
    {

        cout << "This is Derived class's display function" << endl;
    }
};

int main()
{
    Base *baseptr;
    Derived d;
    baseptr = &d;
    baseptr->print();   // This is Derived class's print function
    baseptr->display(); // This is Base class's display function
    return 0;
}