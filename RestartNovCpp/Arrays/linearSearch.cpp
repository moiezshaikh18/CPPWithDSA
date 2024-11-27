#include <iostream>
using namespace std;

bool search(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    // wheather 1 is present in it or not ?

    int n;
    cout << "Enter the number want to check is present in array or not :: " << endl;
    cin >> n;

    bool result = search(arr, 10, n);

    if (result)
    {
        cout << "Number is Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
}