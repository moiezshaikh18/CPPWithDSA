#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number";
    cin >> n;

    int sum;
    int i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Total sum of Number:" << sum << endl;
}