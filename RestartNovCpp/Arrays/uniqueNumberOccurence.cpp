#include <iostream>
using namespace std;

void uniqueNumberOccerrence(int arr[], int size)
{
    int count[201] = {0}; // count
    int freq[101] = {0};

    for (int i = 0; i < size; i++)
    {
        count[arr[i] + 100] = count[arr[i] + 100] + 1;
    }

    for(int i =0;i<201;i++){
        
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

    uniqueNumberOccerrence(array, size);
}