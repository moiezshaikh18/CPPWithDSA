#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Pattern number::--> " << endl;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j < n)
        {
            cout << n - j - 1 + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}