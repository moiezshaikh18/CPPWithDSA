#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    int count = 0;

    while (a != 0 || b != 0)
    {

        if (a & 1 || b & 1)
        {
            count++;
        }

        a = a >> 1;
        b = b >> 1;
    }

    cout << "Total set bits in both numbers: " << count << endl;

    return 0;
}
