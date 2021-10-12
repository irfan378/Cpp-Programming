#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This will not swap a and b
// int swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// Call by Reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by refernce by using reference varaibles
void swapRefernece(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}
int main()
{
    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is" << sum(x, y);
    // swap(x, y);
    cout << "The value of x is" << x << "and the value of y is" << y << endl;
    // swapPointer(&x, &y); This will swap a and b using pointers
    swapRefernece(x, y);
    // swapRefernece(x,y)=766;
    cout << "The value of x is" << x << "and the value of y is" << y << endl;

    return 0;
}