#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    // return same array

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // XOR 1 - n-1

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
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

    int result = findDuplicate(array, size);

    cout << "Duplicate Number in array is: " << result << endl;
}