#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter row";
    cin >> row;

    int i = 1;

    while (i <= row)
    {
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}