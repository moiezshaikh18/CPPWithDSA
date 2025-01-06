#include <iostream>
using namespace std;

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

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    cout << "Sum of array is : " << sum << endl;
}