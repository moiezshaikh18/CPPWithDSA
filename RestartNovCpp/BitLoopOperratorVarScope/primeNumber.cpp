#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n::" << endl;
    cin >> n;

    int i = 2;
    bool isPrime = false;
    while (i < n)
    {
        if (n & i != 0)
        {
            isPrime = true;
        }
        else
        {
            isPrime = false;
        }
        i++;
    }

    if (isPrime)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}