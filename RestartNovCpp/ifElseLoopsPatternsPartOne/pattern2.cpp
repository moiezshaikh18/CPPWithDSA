// 111
// 222
// 333

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number:--> " << endl;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << row;
            j++;
        }
        cout << endl;
        row++;
    }
}