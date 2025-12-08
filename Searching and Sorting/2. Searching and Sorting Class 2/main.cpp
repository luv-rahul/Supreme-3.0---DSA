#include <iostream>
using namespace std;

int peakElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start < end)
    {
        // Line A
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Line B
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = (start + (end - start) / 2);
    }
    return start;
}

int pivotIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        // Standing on Pivot Index
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        // Line A
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Line B
        else if (arr[mid] < arr[0])
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
}

int binarySearch(int arr[], int start, int end, int target)
{
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}

int searchInRotatedSortedArray(int arr[], int size, int target)
{
    int pivot = pivotIndex(arr, size);
    if (target >= arr[0] && target <= arr[pivot])
    {
        cout << "inside1:";
        int searchedIndex = binarySearch(arr, 0, pivot, target);
        return searchedIndex;
    }
    else if (target >= arr[pivot + 1] && target <= arr[size - 1])
    {
        cout << "inside:";
        int searchedIndex = binarySearch(arr, pivot + 1, size - 1, target);
        return searchedIndex;
    }
    return -1;
}

int squareRoot(int n)
{
    int start = 0;
    int end = n;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
}

int main()
{
    //* 852. Peak Index in a Mountain Array
    // int arr[] = {0, 1, 2};
    // int size = 3;
    // int peakIndex = peakElement(arr, size);
    // cout << "PeakIndex: " << peakIndex << endl;

    //* Search in a rotated sorted array
    // int arr[] = {4, 5, 6, 7, 0, 1, 2};
    // int size = 7;
    // int target = 3;
    // cout << searchInRotatedSortedArray(arr, size, target) << endl;

    //* Square Root
    // int num = 100;
    // int sqRootAns = squareRoot(num);
    // cout << "Sqaure Root of " << num << ": " << sqRootAns << endl;
    return 0;
}