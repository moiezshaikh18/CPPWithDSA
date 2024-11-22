#include <iostream>
using namespace std;

int calculateNthTerm(int a1, int d, int n)
{
    return a1 + (n - 1) * d;
}

int main()
{
    int a1, n, d;

    cout << "Enter the value of a1::" << endl;
    cin >> a1;

    cout << "Enter the value of n::" << endl;
    cin >> n;

    cout << "Enter the value of d::" << endl;
    cin >> d;

    int nth_term = calculateNthTerm(a1, d, n);

    cout << "n term for " << n << " is ::" << nth_term << endl;
}