#include <iostream>
using namespace std;

int findDuplicateNumber(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of array::" << endl;
    cin >> size;

    int array[100];
    // for input array

    cout << "Enter the" << size << "elements in array::" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int duplicateNumber = findDuplicateNumber(array, size);

    cout << "Array duplicate number is::" << duplicateNumber << endl;

    return 0;
}
