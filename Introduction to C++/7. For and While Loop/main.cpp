#include <iostream>
using namespace std;

int main()
{
    /*For Loop*/
    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << "Rahul" << endl;
    }

    // Counting from 1 to 10
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << i << " ";
    }

    // Counting from 51 to 69
    for (int i = 51; i < 70; i = i + 1)
    {
        cout << i << " ";
    }

    // Break Keyword
    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << i << " ";
        if (i == 5)
        {
            break; // Exit
        }
    }

    // Continue Keyword
    for (int i = 1; i <= 5; i = i + 1)
    {
        if (i == 2)
        {
            continue;
        }

        cout << i << " ";
    }

    // While Loop
    int i = 1;
    while (i <= 5)
    {
        cout << i << " ";
        i = i + 1;
    }
    return 0;
}