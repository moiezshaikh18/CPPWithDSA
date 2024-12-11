#include <iostream>
using namespace std;

void findInterSectionArray(int arr[], int size)
{
    bool hasDuplicated = false;

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
        {
            bool isAlreadyPrinted = false;
            for (int k = 0; k < i; k++)
            {
                if (arr[k] == arr[i])
                {
                    isAlreadyPrinted = true;
                    break;
                }
            }

            if (!isAlreadyPrinted)
            {
                cout << " " << arr[i];
                hasDuplicated = true;
            }
        }
    }

    if (!hasDuplicated)
    {
        cout << "No Duplicate Found";
    }
    cout << endl;
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

    findInterSectionArray(array, size);

    return 0;
}
