#include <iostream>
#include <math.h>
using namespace std;

// Division Method
int decimalToBinaryMethod1(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        cout << rem << endl;
        ans = ans + rem * pow(10, i);
        n = n / 2;
        i++;
    }
    return ans;
}

// Bitwise Method
int decimalToBinaryMethod2(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n & 1;
        cout << rem << endl;
        ans = ans + rem * pow(10, i);
        n = n >> 1;
        i++;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        ans = ans + bit * pow(2, i);
        n = n / 10;
        i++;
    }
    return ans;
}

int main()
{
    // * Decimal to Binary
    int num;
    cout << "Enter num: ";
    cin >> num;
    // Division Method
    int binary = decimalToBinaryMethod1(num);
    cout << "Binary equivalent to " << num << " is: " << binary << endl;
    // Bitwise Method
    int binaryAns = decimalToBinaryMethod2(num);
    cout << "Binary equivalent to " << num << " is: " << binaryAns << endl;

    // * Binary to Decimal
    int num;
    cout << "Enter num: ";
    cin >> num;
    int decimalAns = binaryToDecimal(num);
    cout << "Decimal equivalent to " << num << " is: " << decimalAns << endl;
    return 0;
}