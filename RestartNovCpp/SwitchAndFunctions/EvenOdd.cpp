#include <iostream>
using namespace std;

bool isEvenOdd(int a)
{
    if (a % 2 != 0)
    {
        return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter the value of n::";
    cin >> n;

    bool result = isEvenOdd(n);
    if (result)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}