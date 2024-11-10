#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter Number:-->" << endl;
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum of N Number::-->> " << sum << endl;
}