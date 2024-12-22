#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while ((start <= end))
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the array size::" << endl;
    cin >> size;

    int array[100];

    cout << "Enter the " << size << " elements::" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    reverse(array, size);
    printArray(array, size);
}