#include <iostream>
using namespace std;

void alternateArraySwap(int arr[], int size)
{
    // return same array

    int temp = arr[1];
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
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

    int array[100];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    alternateArraySwap(array, size);

    cout << "Alternate swap array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}