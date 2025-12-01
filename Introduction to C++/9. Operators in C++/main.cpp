#include <iostream>
using namespace std;

int main()
{
    /*Unary Operators*/
    int a = 5;
    cout << a << endl;
    cout << (++a) << endl; // a = 6
    cout << (a++) << endl; // 6
    cout << a << endl;     // a = 7
    cout << (--a) << endl; // a = 6
    cout << (a--) << endl; // 6
    cout << a << endl;     // a = 5

    /*Binary Operators*/

    // Arithmeric
    int a = 10;
    int b = 5;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;
    // Type Casting
    cout << (5 / 2) << endl;   // int/int = int
    cout << (5.0 / 2) << endl; // float/int = int

    // Relational
    cout << (10 > 5) << endl;
    cout << (10 < 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 != 5) << endl;

    // Logical
    // &&
    bool cond1 = false;
    bool cond2 = false;
    bool cond3 = false;
    if (cond1 && cond2 && cond3)
    {
        cout << "All conditions are true" << endl;
    }
    else
    {
        cout << "All conditions arn't true" << endl;
    }

    // ||
    if (cond1 || cond2 || cond3)
    {
        cout << "Atleast one conditions is true" << endl;
    }
    else
    {
        cout << "All conditions are false" << endl;
    }

    // !
    bool condition = (5 != 10);
    cout << (!condition) << endl;

    // Assignment
    int a = 5;
    a = a + 10;
    a += 10;
    a = a * 10;
    a *= 10;
    cout << a << endl;

    // Bitwise
    cout << (5 & 4) << endl;
    cout << (5 | 4) << endl;
    cout << ~(1) << endl;
    cout << (5 << 1) << endl;
    cout << (5 << 2) << endl;
    cout << (5 << 3) << endl;
    cout << (5 << 4) << endl;
    cout << (10 >> 1) << endl;
    cout << (100 >> 1) << endl;
    cout << (100 >> 2) << endl;
    cout << (100 >> 3) << endl;
    cout << (5 ^ 5) << endl;
    cout << (5 ^ 4) << endl;
    return 0;
}