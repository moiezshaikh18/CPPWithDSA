#include <iostream>
using namespace std;

void findAllDuplicateNumbers(int arr[], int size)
{
    int count[size + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < size)
        {
            count[arr[i]] = count[arr[i]] + 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (count[i] > 1)
        {
            cout << ":" << i;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int array[100]; // Array with a maximum size of 100

    cout << "Enter the " << size << " elements:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i]; // Input elements of the array
    }

    findAllDuplicateNumbers(array, size);

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " "; // Print each element of the array
    }
    cout << endl; // End line after printing all elements

    return 0;
}
