#include <iostream>
using namespace std;

bool isPrimeNumber(int num)
{
    bool isPrime = false;

    if (num % 2 != 0)
    {
        isPrime = true;
    }
    else
    {
        isPrime = false;
    }

    return isPrime;
}

int main()
{
    int num;
    cout << "Enter Number ::-->> " << endl;
    cin >> num;

    if (isPrimeNumber(num))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}