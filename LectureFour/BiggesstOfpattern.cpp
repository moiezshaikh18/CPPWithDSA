#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Entter Number:";
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        // first tranggle
        int j = 1;

        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        // star first trangle
        int start = i * 2 - 2;
        while (start)
        {
            cout << "*";
            start--;
        }

        // // star second trangle
        // int secStart = i - 1;
        // while (secStart)
        // {
        //     cout << "*";
        //     secStart--;
        // }

        // last trangle

        int l = n - i + 1;
        while (l >= 1)
        {
            cout << l;
            l--;
        }

        cout << endl;
        i++;
    }
}