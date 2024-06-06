#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number:";
    cin >> n;

    int i = 1;
    int sumOfEven = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "Even Number:" << i << endl;
            sumOfEven = sumOfEven + i;
        }
        i++;
    }

    cout << "Sum Of Even Numbers is :" << sumOfEven << endl;
}