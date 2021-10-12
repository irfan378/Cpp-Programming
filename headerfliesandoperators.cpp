#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 6;
    cout << "Operators in c++" << endl;
    cout << "Following are the types of opertors in c++" << endl;
    // Arithmetic operators
    cout << "The value of a+b is" << a + b << endl;
    cout << "The value of a-b is" << a - b << endl;
    cout << "The value of a*b is" << a * b << endl;
    cout << "The value of a/b is" << a / b << endl;
    cout << "The value of a%b is" << a % b << endl;
    cout << "The value of a++ is" << a++ << endl;
    cout << "The value of a-- is" << a-- << endl;
    cout << "The value of ++a is" << ++a << endl;
    cout << "The value of --a is" << --a << endl;
    cout << endl;
    //Assignment operators
    // int a=3,b=9;
    // char d='d';
    //Comparison operators
    cout << "The value of a==b is" << (a == b) << endl;
    cout << "The value of a!=b is" << (a != b) << endl;
    cout << "The value of a>=b is" << (a >= b) << endl;
    cout << "The value of a<=b is" << (a <= b) << endl;
    cout << "The value of a>b is" << (a > b) << endl;
    cout << "The value of a<b is" << (a < b) << endl;
    //Logical Operators
    cout << "The value of ((a == b) && (a<b)) logical operator is" << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b) || (a<b)) logical operator is" << ((a == b) || (a < b)) << endl;
    cout << "The value of (!(a == b)) logical operator is" << (!(a == b)) << endl;

    return 0;
}