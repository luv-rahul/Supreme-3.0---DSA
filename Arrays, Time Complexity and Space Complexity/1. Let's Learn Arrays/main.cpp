#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve1(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

bool findTarget(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int findMaximum(int arr[], int size)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] >= maxAns)
        // {
        //     maxAns = arr[i];
        // }

        maxAns = max(arr[i], maxAns);
    }
    return maxAns;
}

int findMinimum(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] <= minAns)
        // {
        //     minAns = arr[i];
        // }
        minAns = min(arr[i], minAns);
    }
    return minAns;
}

void countZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Number of zeroes: " << zeroCount << endl;
    cout << "Number of ones: " << oneCount << endl;
}

void extremePrinting(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main()
{
    //* Creation
    int arr[10];
    // int brr[]; // !error: storage size of 'brr' isn't known
    int crr[] = {10, 20, 40, 70};
    int drr[4] = {0};

    cout << drr[0] << endl;
    cout << crr[0] << endl;
    cout << crr[1] << endl;
    cout << crr[2] << endl;
    cout << crr[3] << endl;
    cout << crr[4] << endl; // Garbage Value or Segmentation Fault

    //* Fill
    int arr[4];
    fill(arr, arr + 4, 23);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

    //* Input
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }

    //* Output
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    //* Functions
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    print(arr, size);
    solve1(arr, size);
    print(arr, size);

    //* Linear Search
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 50;
    bool ans = findTarget(arr, size, target);
    cout << "Found or not: " << ans << endl;

    //* Maximum Element & Minimum Element
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int maximum = findMaximum(arr, size);
    cout << "Maximum Element: " << maximum << endl;
    int minimum = findMinimum(arr, size);
    cout << "Minimum Element: " << minimum << endl;

    //* Count Zeroes and Ones
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    int size = 7;
    countZeroesAndOnes(arr, size);

    //* Extreme Printing
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    extremePrinting(arr, size);
    return 0;
}