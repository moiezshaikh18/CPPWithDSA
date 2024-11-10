// ****
// ****
// ****
// ****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Pattern number::--> " << endl;
    cin >> n;
    int row = 0;

    while (row < n)
    {
        int col = 0;
        while (col < n)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}