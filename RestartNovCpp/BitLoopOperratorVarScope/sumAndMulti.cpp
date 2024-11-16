#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N::" << endl;
    cin >> n;
    int sum = 0;
    int multi = 1;
    for (int i = 0; i <= n; i++)
    {
        int digit = n % 10;
        sum = sum + digit;
        multi = multi * digit;
        n = n / 10;
    }
    cout << sum << endl;
    cout << multi << endl;
    cout << "Substraction of both 'Sum' and 'Multi'::" << (multi - sum) << endl;
}