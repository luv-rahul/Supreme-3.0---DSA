#include <iostream>
using namespace std;

int main()
{
    //* Nested Loop
    for (int i = 1; i <= 3; i++)
    {
        cout << i << "->";
        for (int j = 1; j <= 2; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //* Patterns
    /*Square Pattern*/
    int size;
    cout << "Enter size of square: ";
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Rectangle Pattern*/
    int length;
    cout << "Enter length: ";
    cin >> length;

    int breadth;
    cout << "Enter breadth: ";
    cin >> breadth;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < breadth; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Hollow Rectangle*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;

    int totalColumns;
    cout << "Enter number of columns: ";
    cin >> totalColumns;

    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < totalColumns; col++)
        {
            // First and Last Row
            if (row == 0 || row == totalRows - 1)
            {
                cout << "* ";
            }
            // Middle Rows
            else
            {
                // First and Last Column
                if (col == 0 || col == totalColumns - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    /*Hollow Square*/
    int size;
    cout << "Enter size of square: ";
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            // First and Last Row
            if (row == 0 || row == size - 1)
            {
                cout << "* ";
            }
            // Middle Row
            else
            {
                if (col == 0 || col == size - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    /*Half Pyramid*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;

    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Inverted Half Pyramid*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;

    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < totalRows - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Hollow Half Pyramid*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;

    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            // First,Second and Last Row
            if (row == 0 || row == 1 || row == totalRows - 1)
            {
                cout << "* ";
            }
            // Middle Row
            else
            {
                // First Column and Last Column
                if (col == 0 || col == row)
                {
                    cout << "* ";
                }
                // Middle Columns
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    /*Inverted Hollow Half Pyramid*/
    int totalRows;
    cout << "'Enter number of rows: ";
    cin >> totalRows;
    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < totalRows - row; col++)
        {
            if (row == 0 || row == totalRows - 2 || row == totalRows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == totalRows - row - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    /*Numeric Half Pyramid*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;

    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    /*Inverted Numeric Half Pyramid*/
    int totalRows;
    cout << "Enter number of rows: ";
    cin >> totalRows;
    for (int row = 0; row < totalRows; row++)
    {
        for (int col = 0; col < totalRows - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}