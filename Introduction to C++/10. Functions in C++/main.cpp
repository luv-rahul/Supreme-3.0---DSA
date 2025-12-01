#include <iostream>
using namespace std;

void printCounting()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int sum(int a, int b)
{
    int total = a + b;
    return total;
}

// Function Declaration
void printMyName();

int getMultiplication(int x, int y, int z)
{
    return x * y * z;
}

void printNameTenTimes()
{
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << "Rahul" << endl;
    }
}

void printMultiples(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << " ";
    }
    cout << endl;
}

int convertIntoCelsius(int far)
{
    int celsius = (far - 32) * 5 / 9;
    return celsius;
}

char convertIntoUpperCase(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}

int main()
{
    /*Functions*/
    printCounting();
    cout << "Rahul" << endl;
    printCounting();
    int a;
    cout << "Enter input: ";
    cin >> a;
    printCounting();

    int ans = sum(5, 10);
    cout << "Sum: " << ans << endl;
    printMyName();

    int multiplicationAns = getMultiplication(5, 4, 3);
    cout << multiplicationAns << endl;

    printNameTenTimes();

    int num = 5;
    printMultiples(num);

    int farh = 32;
    int celsiusAns = convertIntoCelsius(farh);
    cout << celsiusAns << endl;

    char result = convertIntoUpperCase('a');
    cout << result << endl;
    return 0;
}

// Function Defination
// ! If we want to define the function later, we must atleadt declare the function above before using it.
void printMyName()
{
    cout << "Rahul" << endl;
}