#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int ans = (factorial(n) / (factorial(r) * factorial(n - r)));

    return ans;
}

int main()
{

    int n, r;
    cout << "Enter the value of n::" << endl;
    cin >> n;
    cout << "Enter the value of r::" << endl;
    cin >> r;

    int result = nCr(n, r);

    cout << "Answer is::" << result << endl;
}