#include <iostream>
using namespace std;

// Pehle occurrence dhoondho
int firstOccurrence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int firstOcc = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            firstOcc = mid;
            end = mid - 1; // Left side check karo
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return firstOcc;
}

// Last occurrence dhoondho
int lastOccurrence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int lastOcc = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            lastOcc = mid;
            start = mid + 1; // Right side check karo
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return lastOcc;
}

// Binary Search se count nikalo
int NumberOccurenceBinary(int arr[], int size, int key)
{
    int first = firstOccurrence(arr, size, key);
    int last = lastOccurrence(arr, size, key);

    if (first == -1 || last == -1)
        return 0; // Key mili hi nahi
    return (last - first + 1);
}

// Linear Search Approach
int NumberOfOccurrence(int arr[], int size, int key)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    if (size <= 0 || size > 100)
    {
        cout << "Invalid size, please enter between 1 to 100" << endl;
        return 0;
    }

    int array[100];

    cout << "Please enter the sorted array of " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int linearSearchApproch = NumberOfOccurrence(array, size, key);
    int binarySearchApproch = NumberOccurenceBinary(array, size, key);

    cout << "Count of key using linear search: " << linearSearchApproch << endl;
    cout << "Count of key using binary search: " << binarySearchApproch << endl;

    return 0;
}
