#include <iostream>
using namespace std;

int main()
{

    int n;
    int prod = 1;
    int sum = 0;

    cout << "Enter N:- ";
    cin >> n;

    while (n != 0)
    {
        int rem = n % 10;

        cout << rem << endl;

        prod = prod * rem;

        sum = sum + rem;

        n = n / 10;

        cout << n << endl;
    }
    int sub = prod - sum;
    return sub;
}