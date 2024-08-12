#include <iostream>
using namespace std;

void dummy(int n)
{
    cout << "N is " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);

    cout << "N from Main Function:-" << n << endl;
}