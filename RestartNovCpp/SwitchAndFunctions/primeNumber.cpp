#include <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter the number of n::" << endl;
    cin >> n;

    bool result = isPrime(n);
    if (result)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime";
    }
}