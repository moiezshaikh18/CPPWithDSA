#include <iostream>
using namespace std;

int main()
{
    int n, nextNumber;

    int a = 0, b = 1;

    cout << "Enter Number:-" << endl;
    cin >> n;

    cout << a << "," << b;

    for (int i = 0; i <= n; i++)
    {
        nextNumber = a + b;

        cout << "," << nextNumber << ",";
        a = b;
        b = nextNumber;
    }
}

// output:-Enter Number:-
// 10
// 0,1,1,,2,,3,,5,,8,,13,,21,,34,,55,,89,,144,