#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is" << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z3;
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    // z2=z; Copy constructor will not be invoked
    Number z3 = z; //  Copy constructor will be invoked

    return 0;
}