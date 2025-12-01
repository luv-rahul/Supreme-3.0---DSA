#include <iostream>
using namespace std;

int main()
{
    /*Do-While Loop*/
    int i = 1;
    do
    {
        cout << i << " ";
        i = i + 1;
    } while (i <= 5);

    /*Nested Loop*/
    for (int i = 1; i <= 3; i = i + 1)
    {
        for (int j = 1; j <= 3; j = j + 1)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= 2; i = i + 1)
    {
        for (int j = 1; j <= 2; j = j + 1)
        {
            cout << i * j << " ";
        }
    }
    return 0;
}