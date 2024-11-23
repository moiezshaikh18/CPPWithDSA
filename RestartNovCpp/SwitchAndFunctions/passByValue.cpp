#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "n is " << n << endl;
}

int main()
{
    int n;
    cout << "Enter the number :: " << n << endl;
    cin >> n;

    dummy(n);

    cout << n << " value " << endl;
}