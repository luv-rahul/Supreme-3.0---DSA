#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return true;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        // mid = (start + end) / 2;
        mid = (start + (end - start) / 2);
    }
    return false;
}

void findFirstOccurence(int arr[], int size, int target, int &ansIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Store and Compute
            ansIndex = mid;
            // Search in left to find first occurence
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
}

void findLastOccurence(int arr[], int size, int target, int &ansIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Store and Compute
            ansIndex = mid;
            // Search on the right to find last occurence
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
}

void findMissingNumber(int arr[], int size, int &missingNumber)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] != mid)
        {
            missingNumber = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }

    if (missingNumber == -1)
    {
        missingNumber = size;
    }
}

int main()
{
    //* 704. Binary Search
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int size = 6;
    int target = 9;
    bool ans = binarySearch(arr, size, target);
    cout << "Found or not: " << ans << endl;

    //* Binary Search using STL
    bool stlAns = binary_search(arr, arr + size, target);
    cout << "Found or not: " << stlAns << endl;

    //* 34. Find First Occurence
    int arr[] = {20, 20, 20, 20, 20, 20, 20, 30, 40, 50, 60};
    int size = 11;
    int target = 200;
    int firstIndex = -1;
    findFirstOccurence(arr, size, target, firstIndex);
    cout << "First Occurence: " << firstIndex << endl;

    //* 34. Find Last Occurence
    int lastIndex = -1;
    findLastOccurence(arr, size, target, lastIndex);
    cout << "Last Occurence: " << lastIndex << endl;

    //* Find Total Occurence
    int totalOccurence;
    if (firstIndex = -1 || lastIndex == -1)
    {
        totalOccurence = 0;
    }
    else
    {

        totalOccurence = lastIndex - firstIndex + 1;
    }
    cout << "Total Occurence: " << totalOccurence << endl;

    //* 268. Find Missing Number
    int arr[] = {0, 1, 2, 3, 4, 5, 7, 8, 9};
    int size = 9;
    int missingNumber = -1;
    findMissingNumber(arr, size, missingNumber);
    cout << "Missing Number: " << missingNumber << endl;
    return 0;
}