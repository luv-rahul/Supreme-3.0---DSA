#include <iostream>
using namespace std;

void sayMyName()
{
    cout << "Rahul!" << endl;
}

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << 2 * i << " ";
    }
    cout << endl;
}

bool checkAge(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int exponentiation(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int sumOfAP(int first, int last, int n)
{
    int sum = (n * (first + last)) / 2;
    return sum;
}

bool checkPrime(int n)
{
    if (n <= 1)
    {
        cout << "Please enter valid number (greater than 2)*" << endl;
        return false;
    }

    else if (n == 2)
    {
        return true;
    }

    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }

    return true;
}

void printEvenNumbers(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (!(i & 1))
        {
            cout << i << " ";
        }
    }
}

float calculatePercentage(int a, int b, int c, int d, int e)
{
    float totalMarks = 500.0;
    float percentage = ((a + b + c + d + e) * 100 / totalMarks);
    return percentage;
}

int main()
{
    //* Bitwise Operators
    cout << (5 & 3) << endl;
    cout << (5 | 3) << endl;
    cout << ~(5) << endl;
    cout << (5 ^ 5) << endl;
    cout << (5 ^ 5 ^ 9) << endl;
    cout << (25 << 1) << endl;
    cout << (25 << 2) << endl;
    cout << (-10 << 1) << endl;
    cout << (-1000 >> 1) << endl;
    cout << (-10 >> 1) << endl;

    /*Check even or odd*/
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n & 1)
    {
        cout << "Odd Number" << endl;
    }
    else
    {
        cout << "Even Number" << endl;
    }

    /*Count set bits*/
    int n;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of set-bits: " << count << endl;

    // * Functions
    sayMyName();

    printTable(2);

    int age = 19;
    if (checkAge(age))
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote!" << endl;
    }

    /*Exponentiation*/
    int a = 2;
    int b = 10;
    int ans = exponentiation(a, b);
    cout << a << "^" << b << ": " << ans << endl;

    /*Sum of AP*/
    // 2,4,6,8,10
    int first = 2;
    int last = 10;
    int noOfTerms = 5;
    int totalSum = sumOfAP(first, last, noOfTerms);
    cout << "Sum of AP: " << totalSum << endl;

    /*Check Prime*/
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool prime = checkPrime(n);
    cout << "Prime or not: " << prime << endl;

    /*Print Even Numbers*/
    int start = 101;
    int end = 123;
    printEvenNumbers(start, end);

    /*Calculate Percentage*/
    int a = 95;
    int b = 95;
    int c = 95;
    int d = 99;
    int e = 98;
    float ans = calculatePercentage(a, b, c, d, e);
    cout << "Percentage: " << ans << endl;

    // * Reference Variable
    int age = 15;
    cout << age << endl;
    int &demo = age;
    cout << demo << endl;
    age++;
    cout << demo << endl;
    return 0;
}