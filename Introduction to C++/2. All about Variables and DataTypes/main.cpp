#include <iostream>
using namespace std;

int main()
{
    //* Variables
    int age = 23;
    cout << "Rahul's age is: " << age << endl;

    // Declaration
    int age; // Garbage Value
    cout << age << endl;

    // Defination
    int age = 21;
    cout << age << endl;

    // Manipulation / Updation
    age = 101;
    cout << age << endl;

    // * Datatypes

    // int
    int count = 5;

    // float
    float share = 3.14;

    // char
    char alphabet = 'z'; // Always insert in 'single quotes'.

    // double
    double weight = 55.69887;

    // bool
    bool isMale = true;
    bool isChild = 1;
    bool isFemale = false;
    bool isGirl = 0;

    cout << count << endl;
    cout << share << endl;
    cout << alphabet << endl;
    cout << weight << endl;
    cout << isMale << endl;

    // sizeof
    int age = 12;
    cout << sizeof(age) << endl;

    // Redeclaration
    int age = 12;
    {
        int age = 5;
    }
    {
        int age = 25;
    }

    return 0;
}