#include <iostream>
using namespace std;

void printCounting(int n)
{

    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n::" << endl;
    cin >> n;

    printCounting(n);
}