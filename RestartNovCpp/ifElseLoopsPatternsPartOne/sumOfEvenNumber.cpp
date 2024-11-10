#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter given range number:---> " << endl;
    cin >> n;

    int i = 0;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    cout << "value of even numbers::---> " << sum << endl;
}