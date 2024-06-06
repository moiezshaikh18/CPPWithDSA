#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter A:";
    cin >> a;

    cout << "Enter B:";
    cin >> b;

    if (a > b)
    {
        cout << "A is greater Number";
    }
    else if (b > a)
    {
        cout << "B is greater Number";
    }
    else
    {
        cout << "Both are equal numbers";
    }
}