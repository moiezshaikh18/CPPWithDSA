#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array::" << endl;
    cin >> size;

    int array[100];

    cout << "Please enter the " << size << " elements:::" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    return 0;
}