#include <iostream>
using namespace std;

int findDuplicateNumbers(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];

        cout << "In Loop: " << ans << endl;
    }

    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of an array" << endl;
    cin >> size;

    if (size <= 0 | size > 100)
    {
        cout << "Invalid size please enter the size between 1 - 100" << endl;
    }

    int array[100];

    cout << "Enter the " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int result = findDuplicateNumbers(array, size);

    cout << "Duplicate number is : " << result << endl;
}