#include <iostream>
using namespace std;

int main()
{
    int budget;
    cout << "Enter your budget: ";
    cin >> budget;

    /*If*/
    if (budget > 2000000)
    {
        cout << "You can buy Scorpio!" << endl;
    }

    /*If-else*/

    if (budget > 2000000)
    {
        cout << "You can buy Scorpio!" << endl;
    }
    else
    {
        cout << "You can't buy Scorpio!" << endl;
    }

    int age = 23;
    if (age > 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote!" << endl;
    }

    /*If-else if + If - else if - else*/
    int marks = 55;
    if (marks > 90)
    {
        cout << "A" << endl;
    }
    else if (marks > 80)
    {
        cout << "B" << endl;
    }
    else if (marks > 70)
    {
        cout << "C" << endl;
    }
    else if (marks > 60)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    /*Nested if*/
    int height;
    cout << "Enter height: ";
    cin >> height;
    int weight;
    cout << "Enter weight: ";
    cin >> weight;
    if (height > 5)
    {
        if (weight > 70)
        {
            cout << "You've got a good BMI." << endl;
        }
        else
        {
            cout << "Bhai tujhse na ho payega!" << endl;
        }
    }
    else
    {
        cout << "Complan dila doon!" << endl;
    }

    return 0;
}