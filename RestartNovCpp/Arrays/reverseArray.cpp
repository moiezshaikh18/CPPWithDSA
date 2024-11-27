#include <iostream>
#include <climits>
using namespace std;

void reverseArray(int arr[], int size, int reversed[])
{

    for (int i = 0; i < size; i++)
    {
        reversed[i] = arr[size - 1 - i]; // Copy elements in reverse order
    }
}

void reverseArraySecond(int arr[], int size)
{
    // return same array

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    if (size <= 0 || size > 100)
    {
        cout << "Invalid size. Please enter a size between 1 and 100." << endl;
        return 1; // Exit the program with an error
    }

    int array[100], reversed[100], reversedSecond[100];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    reverseArray(array, size, reversed);

    cout << "Reversed array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << reversed[i] << " ";
    }
    cout << endl;

    cout << "Second logic ---------- for reverse array" << endl;

    reverseArraySecond(array, size);

    cout << "Reversed array second logic swapping is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
