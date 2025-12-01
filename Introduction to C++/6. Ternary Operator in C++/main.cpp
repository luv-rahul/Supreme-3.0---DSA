#include <iostream>
using namespace std;

int main()
{
    int age = 22;

    /*Ternary Operator*/
    (age > 18) ? cout << "Can Vote!" << endl : cout << "Can't Vote" << endl;

    int x = 10;
    int y = 20;
    int result = (x > y) ? x : y;
    cout << "Result: " << result << endl;
    return 0;
}