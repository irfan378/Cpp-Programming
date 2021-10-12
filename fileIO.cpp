#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="irfan";
    string st2;
    // Opening files using constructor and writing it.
    // ofstream out("samplefile.txt");//Write Operation
    // out<<st;
    // Opening files using constructor and writing it.
    ifstream in("samplefile2.txt");//Write Operation
    // in>>st2;
    getline(in,st2);   
    getline(in,st2);   
    cout<<st2;
    return 0;
}