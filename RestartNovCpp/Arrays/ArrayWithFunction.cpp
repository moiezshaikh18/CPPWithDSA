#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "value of array is:: " << arr[i] << endl;
    }
}

int main()
{
    // declare
    int number[15];

    cout << "value at 1 index:::" << number[5] << endl;
    cout << "EveryThing is fine" << endl;

    // initialising an array

    int second[3] = {5, 7, 11};

    printArray(second, 3);

    cout << "--------------------------------------------------------------------" << endl;

    int third[15] = {2, 7};

    printArray(third, 15);

    cout << "--------------------------------------------------------------------" << endl;

    int fourth[10] = {0};

    printArray(fourth, 10);

    cout << "--------------------------------------------------------------------" << endl;

    int fifth[10] = {1};

    printArray(fifth, 10);

    cout << "--------------------------------------------------------------------" << endl;

    cout << "-----------------------Initializing array with 1--------------------" << endl;

    int sixth[10];

    for (int i = 0; i < sizeof(sixth) / sizeof(sixth[0]); i++)
    {
        sixth[i] = 1;
        cout << "Value of sixth array index:: " << i << " is::" << sixth[i] << endl;
    }
}