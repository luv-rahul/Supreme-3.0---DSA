#include <iostream>
using namespace std;

int main()
{
    // * First Program
    cout << "Namaste Dunia!" << endl;

    // * Input
    int age; // Variable Declaration
    cout << "Enter your age: ";
    cin>>age;
    cout << "Your age is: " << age << endl;

    // * Variables & Datatypes
    // int
    int age; // Variable Declaration
    int age = 20; // Variable Initialization

    // char
    char ch = 'a';
    char ch2 = 'ab'; // ! Bad Practice - char stores only single character
    cout << ch2 << endl;

    // float
    float f = 11.6;

    // double
    double d = 12.23423234234;

    // bool
    bool found = 1;

    // sizeof
    char ch = 'R';
    cout << sizeof(ch) << endl;

    //* Out of Range
    short value = 32769;
    cout << value << endl;
    return 0;
}