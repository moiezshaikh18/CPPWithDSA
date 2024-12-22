#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size :: " << endl;
    cin >> size;

    int a = 0, b = 0;

    for (int i = 0; i < size; i++)
    {
        a = a + rand();
    }

    for (int j = 0; j < size; j++)
    {
        b = b + rand();
    }
}

// In case of above example time complexicity is O(n) + O(m) because both for loop are outside we where addind it and if
// there is nested loop we will multiply them like O(n)*O(m)