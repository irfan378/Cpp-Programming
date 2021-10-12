#include <iostream>
using namespace std;
// Base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = 1;
        salary = 34.0;
    }
    Employee() {}
};
// Derived class
// Default visibility mode is private
// Private members are not inherited
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}