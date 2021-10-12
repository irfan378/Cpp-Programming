#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    // (Adress of) operator
    cout << "The adress if a is " << &a << endl;
    cout << "The adress if a is " << b << endl;

    // (valur at)Derefrencing operator
    cout << "The adress if a is " << *b << endl;

    //Pointer to Pointer
    int **c = &b;
    cout << "The adress of b is" << &b << endl;
    cout << "The adress of b is" << c << endl;
    cout << "The value at adress c is " << *c << endl;
    cout << "The value at adress value_at(value_at(c)) is " << **c << endl;

    return 0;
}