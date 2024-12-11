#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{

    int left = 0, right = size - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (arr[left] == 1 && arr[right] == 0)
        {
            int temp = 0;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
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
