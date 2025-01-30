#include <iostream>
using namespace std;

int peakIndexMountain(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2; // Mid ko har baar recalculate karna zaroori hai

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1; // Right wale part me jao, kyunki peak waha hoga
        }
        else
        {
            end = mid; // Mid bhi ek potential peak ho sakta hai, isliye end = mid rakho
        }
    }
    return start; // Start aur end ek hi point pe aa jayenge jo peak index hoga
}

int main()
{
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    if (size <= 0 || size > 100)
    {
        cout << "Invalid size, please enter between 1 to 100" << endl;
        return 0;
    }

    int array[100];

    cout << "Please enter the mountain array of " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    int peakIndexElementResult = peakIndexMountain(array, size);

    cout << "Peak Index of element is: " << peakIndexElementResult << endl;

    return 0;
}
