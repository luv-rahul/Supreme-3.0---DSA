#include <iostream>
using namespace std;

int main()
{
    // * Binary Operators
    /*Arithmetic Operators*/
    int a = 10;
    int b = 5;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    /*Relational Operators*/
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    /*Assignment Operators*/
    a += 10;
    a -= 10;
    a *= 10;
    a /= 10;
    a %= 10;
    cout << a << endl;

    /*Logical Operators*/
    int cond1 = (10 > 5);
    int cond2 = (20 > 14);
    int cond3 = (30 > 25);
    cout << (cond1 && cond2 && cond3) << endl;
    cout << (cond1 && false && cond3) << endl;
    cout << (cond1 || false || cond3) << endl;
    cout << !(true) << endl;
    cout << !(false) << endl;

    // * Unary Operators
    int a = 10;
    int b = 5;
    cout << (++a) * (--b) << endl;
    cout << (++a) * (b--) << endl;
    cout << (a++) * (--b) << endl;
    cout << (a++) * (b--) << endl;

    // * Conditional Statements
    /*If*/
    int age = 18;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }

    /*If-else*/
    int age = 18;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote!" << endl;
    }

    /*If-elseif*/
    int age = 2;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else if (age >= 15)
    {
        cout << "Tum chote ho!" << endl;
    }
    else if (age >= 10)
    {
        cout << "Abhi bhi chote ho!" << endl;
    }
    else if (age >= 5)
    {
        cout << "Paida to hoja bhai!" << endl;
    }

    /*if-elseif-else*/
    int age = 2;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else if (age >= 15)
    {
        cout << "Tum chote ho!" << endl;
    }
    else if (age >= 10)
    {
        cout << "Abhi bhi chote ho!" << endl;
    }
    else if (age >= 5)
    {
        cout << "Paida to hoja bhai!" << endl;
    }
    else
    {
        cout << "Else case mein hoon!" << endl;
    }

    /*Nested if*/
    int age = 21;
    bool manHaiTumhara = true;
    if (age > 18)
    {
        cout << "Bhai tu to bada ho gaya!" << endl;
        if (manHaiTumhara)
        {
            cout << "To fir karde vote!" << endl;
        }
        else
        {
            cout << "Mat kar bhai vote!" << endl;
        }
    }
    else
    {
        cout << "Tu rehnde yaar!" << endl;
    }

    /*Ternary Operator*/
    int money = 10;

    if (money >= 5)
    {
        cout << "Bhot ameer ho!" << endl;
    }
    else
    {
        cout << "Chalo coding seekhte hai!" << endl;
    }

    (money >= 5) ? cout << "Bhot ameer ho!" << endl : cout << "Chalo coding seekhte hai!" << endl;

    /*Switch Case*/
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "You've got >90%." << endl;
        break;
    case 'B':
        cout << "You've got >80%." << endl;
        break;
    case 'C':
        cout << "You've got >70%." << endl;
        break;
    default:
        cout << "You failed!" << endl;
    }

    //* Loop
    // Print Counting from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Print Table
    for (int i = 1; i <= 10; i++)
    {
        cout << 3 * i << " ";
    }
    cout << endl;

    // Note
    int i = 1;
    for (;;)
    {
        if (i > 10)
            break;
        else
            cout << "Rahul" << endl;
        i++;
    }

    return 0;
}