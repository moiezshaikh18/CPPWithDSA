#include <iostream>
using namespace std;

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << " " << i;
    }
}

int main()
{

    int n;

    cout << "Enter Number:";
    cin >> n;

    printCounting(n);
}