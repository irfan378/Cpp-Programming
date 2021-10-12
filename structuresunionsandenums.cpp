#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}ep;
 union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    // union money m1;
    // m1.rice=34;
    // m1.car='c';
    // cout<<m1.rice;

    // ep harry;
    // // struct employee harry;
    // harry.eid=1;
    // harry.favchar='c';
    // harry.salary=1200000;
    // cout<<"The value is"<<harry.eid<<endl;
    // cout<<"The value is"<<harry.favchar<<endl;
    // cout<<"The value is"<<harry.salary<<endl;
    return 0;
}