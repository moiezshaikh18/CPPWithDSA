#include <iostream>
using namespace std;

int findMinNumber(int array[], int size)
{
    int max = INT_MAX;
    int min;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < max)
        {
            return array[i];
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;

    if (size <= 0 | size > 100)
    {
        cout << "Invalid size of an array enter between 1 - 100" << endl;
    }

    int array[size];

    cout << "Please enter the " << size << " elemets:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int minNumber = findMinNumber(array, size);

    cout << "Max Number from an array is: " << minNumber << endl;
}