#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        cout << "Count:: " << count << endl;
        if (count == 1)
        {
            return arr[i];
        }
    }

    return -1;
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

    int result = findUniqueNumber(array, size);

    cout << "Unique number is:: " << result << endl;

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " "; // Print each element of the array
    }
    cout << endl; // End line after printing all elements

    return 0;
}
