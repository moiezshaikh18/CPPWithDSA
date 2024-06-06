#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number:";
    cin >> n;

    int i = 2;

    while (i < n)
    {

        // Divide
        if (n % i == 0)
        {
            cout << "Not a Prime Number:" << i << endl;
        }
        else
        {
            cout << "Prime Number:" << i << endl;
        }
        i++;
    }
}