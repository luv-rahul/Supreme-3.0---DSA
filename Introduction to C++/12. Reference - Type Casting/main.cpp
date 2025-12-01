#include <iostream>
using namespace std;

int main()
{
    //* Type Casting
    /*Implicit TypeCasting*/
    // 1. int to float 
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2; // Implicit Conversion of num1 from int to flaot
    cout << result << endl;

    int num1 = 10;
    float num2 = 5.5;
    int result = num1 + num2; // Implicit Conversion of num1 from int to flaot
    cout << result << endl;

    // 2. char to int
    char ch = 'A';
    int a = ch + 1; // Implicit conversion of ch from char to int
    cout << a << endl;

    char ch = 'A';
    char a = ch + 1; // Implicit conversion of ch from int to char
    cout << a << endl;

    // 3. int to char
    int a = 97;
    char ch = a; // Implicit conversion of a from int to char
    cout << ch << endl;

    /*Explicit Type Casting*/
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2; // Explicit Conversion of num2 from float to int
    cout << result << endl;          // Implicit Conversion of result from int to float

    // 1. double to int
    double pi = 3.14159265;
    int intPi = (int)pi; // Epxlicit Conversion of pi from double to int
    cout << intPi << endl;

    // 2. float to char
    float floatingNumber = 65.35;
    char charValue = (char)floatingNumber; // Epxlicit Conversion of floatingNumber from float to char
    cout << charValue << endl;

    // 3. int to float
    int a = 10;
    int b = 3.0;            // Implicit Conversion from float to int
    float c = a / (float)b; // Explicit Conversion of b from int to float
    cout << c << endl;

    //*Bonus
    /**
     * int / int  = int
     * float / int = float
     * int / float = float
     */
    return 0;
}