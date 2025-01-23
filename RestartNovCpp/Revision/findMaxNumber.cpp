#include <iostream>
using namespace std;

int findMaxNumber(int array[], int size)
{
    int min = INT_MIN;
    int max;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > min)
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

    int maxNumber = findMaxNumber(array, size);

    cout << "Max Number from an array is: " << maxNumber << endl;
}