#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file out stream
    ofstream out("samplefile.txt");

    // Creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name";
    cin >> name;

    // Writing a string to the file
    out << name + "is my name";

    out.close();

    ifstream in("samplefile.txt");
    string content;
    cout << "The content of this file is: " << content;
    in.close();

    return 0;
}