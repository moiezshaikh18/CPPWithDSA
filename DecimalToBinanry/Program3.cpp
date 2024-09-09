// Decimal(-ve) To binary code

#include <iostream>
#include <math.h>
using namespace std;

void BinaryPrint(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter Decimal(-ve) Number:-";
    cin >> n;

    BinaryPrint(n);
}