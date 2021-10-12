#include <iostream>
using namespace std;

class Test
{
    int a; //Here a is intiliazed first.
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b) //this will create problem because a will be intiliazed first if b is initliazed first then this will execute.
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test(4, 6);
    return 0;
}