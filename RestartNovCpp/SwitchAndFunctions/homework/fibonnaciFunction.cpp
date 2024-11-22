#include <iostream>
using namespace std;

void fibbonacci(int n)
{
    if (n == 0)
    {
        cout << "0" << endl;
    }
    else if (n == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        int a = 0;
        int b = 1;
        int nextNumber;
        for (int i = 2; i < n; i++)
        {
            nextNumber = a + b;
            a = b;
            b = nextNumber;
        }
        cout << nextNumber << endl;
    }
}

int main()
{
    int n;
    cout << "enter the value of n::" << endl;
    cin >> n;

    cout << "Fibonnaci::";
    fibbonacci(n);
}