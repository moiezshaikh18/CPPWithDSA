#include <iostream>
using namespace std;

int power(int a, int b)
{

    int pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow = pow * a;
    }

    if (pow > INT_MAX / 2 || pow < INT_MIN)
    {
        return 1;
    }

    return pow;
}

int main()
{

    int a, b;
    cout << "Enter value of a and b::" << endl;
    cin >> a >> b;

    int result = power(a, b);

    cout << "Power on given value" << a << " is::" << result << endl;
}