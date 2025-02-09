#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number:--> ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // loops for spaces
        int spaces = 1;
        while (spaces < n - i + 1)
        {
            cout << " ";
            spaces++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print 3rd tringle
        int f = 1;
        while (f < i)
        {
            cout << f;
            f++;
        }

        cout << endl;
        i++;
    }
}