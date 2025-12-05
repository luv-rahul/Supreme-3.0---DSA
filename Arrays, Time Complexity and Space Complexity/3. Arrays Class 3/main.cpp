#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

bool searchIn2DArray(int arr[][4], int rowSize, int colSize, int target)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool searchIn2DVector(vector<vector<int>> arr, int target)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int findMinimumValue(int arr[][4], int rowSize, int colSize)
{
    int minAns = INT_MAX;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            minAns = min(minAns, arr[row][col]);
        }
    }
    return minAns;
}

int findMaximumValue(int arr[][4], int rowSize, int colSize)
{
    int maxAns = INT_MIN;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            maxAns = max(maxAns, arr[row][col]);
        }
    }
    return maxAns;
}

void rowWiseSum(int arr[][3], int rowSize, int colSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        int sum = 0;

        for (int col = 0; col < colSize; col++)
        {
            sum = sum + arr[row][col];
        }

        cout << "Sum of row " << row << ": " << sum << endl;
    }
}

void colWiseSum(int arr[][3], int rowSize, int colSize)
{
    for (int col = 0; col < colSize; col++)
    {
        int sum = 0;

        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + arr[row][col];
        }

        cout << "Sum of column " << col << ": " << sum << endl;
    }
}

void diagonalWiseSum(int arr[][3], int rowSize, int colSize)
{
    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        sum = sum + arr[row][row];
    }
    cout << "Sum of diagonal elements: " << sum << endl;
}

void transpose(int arr[][3], int rowSize, int colSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = row; col < colSize; col++)
        {
            swap(arr[row][col], arr[col][row]);
        }
    }
}

int main()
{
    //* Declaration
    // int arr[4][3];

    //* Initialise
    // int arr[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60}};

    // int arr[3][2] = {10,20,30,40,50,60};

    // int arr[3][2] = {10, 20};

    // cout << arr[0][0] << endl;
    // cout << arr[0][1] << endl;
    // cout << arr[1][1] << endl;
    // cout << arr[2][1] << endl;

    //* Row Wise Traversal
    // int rowSize = 3;
    // int columnSize = 2;
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int column = 0; column < columnSize; column++)
    //     {
    //         cout << arr[row][column] << " ";
    //     }
    //     cout << endl;
    // }

    //* Column Wise Traversal
    // for (int col = 0; col < columnSize; col++)
    // {
    //     for (int row = 0; row < rowSize; row++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    //* Diagonal Wise Traversal
    // int arr[3][3] = {{10, 20, 30},
    //                  {40, 50, 60},
    //                  {70, 80, 90}};
    // int rowSize = 3;
    // for (int row = 0; row < rowSize; row++)
    // {
    //     cout << arr[row][row] << " ";
    // }

    //* Input
    // int arr[3][3];
    // int rowSize = 3;
    // int colSize = 3;
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << "Enter the value at index " << row << "," << col << ": ";
    //         cin >> arr[row][col];
    //     }
    // }

    // /*Print*/
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int column = 0; column < colSize; column++)
    //     {
    //         cout << arr[row][column] << " ";
    //     }
    //     cout << endl;
    // }

    //* Search
    // int arr[3][4] = {{10, 11, 12, 13},
    //                  {20, 21, 22, 23},
    //                  {31, 32, 44, 55}};

    // int rowSize = 3;
    // int columnSize = 4;
    // int target = 40;
    // bool ans = searchIn2DArray(arr, rowSize, columnSize, target);
    // cout << "Found or not: " << ans << endl;

    //* Vector
    // vector<vector<int>> arr(4, vector<int>(3, 23));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //* Search in vector
    // vector<vector<int>> arr(4, vector<int>(3, 0));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // // Input
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << "Enter value at index " << row << "," << col << ": ";
    //         cin >> arr[row][col];
    //     }
    // }

    // int target = 40;
    // bool ans = searchIn2DVector(arr, target);
    // cout << "Found or not: " << ans << endl;

    //* Minimum Value & Maximum Value
    // int arr[3][4] = {{10, 11, 12, 13},
    //                  {20, 21, 22, 23},
    //                  {31, 32, 44, 55}};

    // int rowSize = 3;
    // int columnSize = 4;
    // int minValue = findMinimumValue(arr, rowSize, columnSize);
    // cout << "Minimum Value: " << minValue << endl;
    // int maxValue = findMaximumValue(arr, rowSize, columnSize);
    // cout << "Maximum Value: " << maxValue << endl;

    //* Row Wise Sum
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};
    int rowSize = 3;
    int columnSize = 3;
    rowWiseSum(arr, rowSize, columnSize);

    //* Column Wise Sum
    colWiseSum(arr, rowSize, columnSize);

    //* Diagonal Wise Sum
    diagonalWiseSum(arr, rowSize, columnSize);

    //* Transpose
    transpose(arr, rowSize, columnSize);
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}