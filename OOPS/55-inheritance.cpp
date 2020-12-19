#include <iostream>
using namespace std;

//********* Single
// class A
// {
// public:
//     void func()
//     {
//         cout << "Single Inherited";
//     }
// };
// class B : public A
// {
// };
// int main()
// {
//     B b;
//     b.func();    // "Single Inherited"
//     return 0;
// }

// //********* Multiple
// class A
// {
// public:
//     void Afunc()
//     {
//         cout << "Func A\n";
//     }
// };

// class B
// {
// public:
//     void Bfunc()
//     {
//         cout << "Func B\n";
//     }
// };

// class C : public A, public B
// {
// public:
// };

// int main()
// {
//     C c;
//     c.Afunc(); // Func A
//     c.Bfunc(); // Func B
//     return 0;
// }

//********* Multi Level
class A
{
public:
    void Afunc()
    {
        cout << "Func A\n";
    }
};

class B : public A
{
public:
    void Bfunc()
    {
        cout << "Func B\n";
    }
};

class C : public B
{
public:
};

int main()
{
    C c;
    c.Afunc(); // Func A
    c.Bfunc(); // Func B
    return 0;
}