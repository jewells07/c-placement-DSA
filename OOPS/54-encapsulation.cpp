#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void funcA()
    {
        cout << "Func A\n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Func B\n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func C\n";
    }
};
int main()
{
    A obj;
    obj.funcA();
    // Can not access
    // obj.funB(); // Private
    // obj.funC(); // Protected

    return 0;
}