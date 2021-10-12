#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;

    cout << "These are math marks" << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    marks[2] = 455;
    cout << "These are marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks" << i << "is " << marks[i] << endl;
    }
    // Pointers and Arrays
    int *p = marks;
    cout << "The value of marks [0] is" << *p << endl;
    cout << "The value of marks [1] is" << *(p + 1);
    cout << "The value of marks [2] is" << (*p + 2);
    cout << "The value of marks [3] is" << (*p + 3);

    return 0;
}