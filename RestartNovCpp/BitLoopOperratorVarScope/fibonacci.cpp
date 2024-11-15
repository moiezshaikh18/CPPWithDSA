#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n::->" << endl;
    cin >> n;

    int a = 0;
    int b = 1;

    if (n == 0)
    {
        cout << "0" << endl;
    }
    else if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            int ans = a + b;
            a = b;
            b = ans;
            cout << "Fibonacci::" << ans << endl;
        }
    }
}