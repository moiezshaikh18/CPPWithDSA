#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        } // go left wala part
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 5, 11, 14, 16};
    int evenKey = 12;
    int oddKey = 14;

    int evenIndex = binarySearch(even, 6, evenKey);
    int oddIndex = binarySearch(odd, 5, oddKey);

    cout << "Even Index of " << evenKey << " is : " << evenIndex << endl;

    cout << "Odd Index of " << oddKey << " is : " << oddIndex << endl;
}