#include <iostream>
using namespace std;

void pairOfSum(int arr[], int size, int sum)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int check = arr[i] + arr[j];
            if (check == sum)
            {
                cout << " " << arr[i] << " " << arr[j];
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

    int sum;
    cout << "Enter the sum value : " << endl;
    cin >> sum;

    pairOfSum(array, size, sum);

    return 0;
}
