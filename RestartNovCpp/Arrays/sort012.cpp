#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{

    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of array::" << endl;
    cin >> size;

    int array[100];
    // for input array

    cout << "Enter the " << size << " elements in array::" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    sort01(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
