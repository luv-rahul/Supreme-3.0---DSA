#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int singleNumber(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void sortZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    // Counting
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

    // Insertion
    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }

    for (int i = zeroCount; i < size; i++)
    {
        arr[i] = 1;
    }
}

void printAllPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

void lowerTriangle(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

void UpperTriangle(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}

bool twoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                return true;
            }
        }
    }
    return false;
}

pair<int, int> twoSumPair(int arr[], int size, int target)
{
    pair<int, int> p = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                p.first = arr[i];
                p.second = arr[j];
                return p;
            }
        }
    }
    return p;
}

void twoSumUsingArray(int arr[], int size, int target, int ans[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
}

void twoSumAllPairs(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}

void printAllTriplets(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                count++;
            }
        }
    }
    cout << "Total Triplets: " << count << endl;
}

bool threeSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void shiftAnArray(int arr[], int size, int shift)
{

    if (shift == 0)
    {
        return;
    }

    // Shift > Size
    shift = shift % size;

    // Store in temporary array
    vector<int> v;
    for (int i = size - shift; i < size; i++)
    {
        v.push_back(arr[i]);
    }

    // Shift to last
    for (int i = size - 1; i >= 0; i--)
    {
        if (i - shift >= 0)
        {
            arr[i] = arr[i - shift];
        }
    }

    // Push into original Array
    for (int i = 0; i < v.size(); i++)
    {
        arr[i] = v[i];
    }
}

int main()
{
    //* 136. Single Number
    int arr[] = {4, 1, 2, 1, 2};
    int size = 5;
    int singleNum = singleNumber(arr, size);
    cout << "Single Number: " << singleNum << endl;

    //* Sort 0's and 1's
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    int size = 7;
    // Counting Based Approach
    sortZeroesAndOnes(arr, size);
    printArray(arr, size);

    // Sort Function - O(nlogn)
    sort(arr, arr + size);
    printArray(arr, size);

    //* Print All Pairs
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    printAllPairs(arr, size);

    //* Lower Triangle
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    lowerTriangle(arr, size);

    //* Upper Triangle
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    UpperTriangle(arr, size);

    //* Two Sum
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    int target = 70;
    bool ans = twoSum(arr, size, target);
    cout << "Found or not: " << ans << endl;

    // Two Sum Pair
    pair<int, int> pairAns = twoSumPair(arr, size, target);
    if (pairAns.first == -1 && pairAns.second == -1)
    {
        cout << "Pair not found!" << endl;
    }
    else
    {
        cout << pairAns.first << "," << pairAns.second << endl;
    }

    // Two Sum Array
    int arrayAns[] = {-1, -1};
    twoSumUsingArray(arr, size, target, arrayAns);
    if (arrayAns[0] == -1 && arrayAns[1] == -1)
    {
        cout << "Pair not found!" << endl;
    }
    else
    {
        cout << arrayAns[0] << "," << arrayAns[1] << endl;
    }

    // Two Sum all Pairs
    twoSumAllPairs(arr, size, target);

    //* Print All Triplets
    printAllTriplets(arr, size);

    //* Three Sum
    bool ans = threeSum(arr, size, target);
    cout << "Found or not: " << ans << endl;

    //* Shift an Array
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int shift = 2;
    shiftAnArray(arr, size, shift);
    printArray(arr, size);
    return 0;
}