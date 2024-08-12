#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num & 1)
    {
        return 0;
    }

    return 1;
}

int main()
{

    int num;

    cout << "Enter Number:-";
    cin >> num;

    int ans = isEven(num);

    if (ans)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "odd Number";
    }
}