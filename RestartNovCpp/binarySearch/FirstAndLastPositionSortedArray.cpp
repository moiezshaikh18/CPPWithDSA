#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;     // Possible first occurrence
            end = mid - 1; // Left side aur check karne ke liye
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
    return ans;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;       // Possible last occurrence
            start = mid + 1; // Right side aur check karne ke liye
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
    return ans;
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

    int firstIndex = firstOccurrence(array, size, key);
    int lastIndex = lastOccurrence(array, size, key);

    if (firstIndex != -1)
    {
        cout << "First occurrence of key is at index: " << firstIndex << endl;
        cout << "Last occurrence of key is at index: " << lastIndex << endl;
    }
    else
    {
        cout << "Key not found in the array!" << endl;
    }

    return 0;
}
