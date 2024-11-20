#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter value of n:::" << endl;
    cin >> n;

    int ans = 1;
    for (int i = 0; i < 30; i++)
    {

        cout << i << " Before if condition ans::" << ans << endl;
        if (ans == n)
        {
            return true;
        }

        ans = ans * 2;
        cout << "After calculation ans::" << ans << endl;
    }
}