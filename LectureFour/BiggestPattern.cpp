#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        // Print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // first trangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // second trangle

        int f = i - 1;
        while (f)
        {
            cout << f;
            f--;
        }

        cout << endl;
        i++;
    }
}