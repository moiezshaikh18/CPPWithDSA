#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array:" << endl;
    cin >> size;

    // Clearing the buffer in case there are extra characters or newlines left in it.
    cin.ignore(); // This will clear the input buffer.

    int array[100];       // Declare array of size 100
    int count[201] = {0}; // To handle positive and negative numbers

    cout << "Enter the " << size << " elements:" << endl;

    // Input the array elements
    for (int i = 0; i < size; i++)
    {
        cin >> array[i]; // Read array element
    }

    // Count the frequency of each element
    for (int i = 0; i < size; i++)
    {
        int mappedIndex = array[i] + 100; // Map element to a positive index
        count[mappedIndex]++;             // Increment the count for that element
    }

    // Output the frequency of each number
    cout << "Element frequencies:" << endl;
    for (int i = 0; i < 201; i++)
    {
        if (count[i] > 0)
        {
            cout << i << ":" << (i - 100) << " occurs " << count[i] << " times" << endl;
        }
    }

    return 0;
}
