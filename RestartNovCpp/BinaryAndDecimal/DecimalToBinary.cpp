#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n;
    cout << "Enter the value of N::";
    cin >> n;

    int i = 0;
    long ans = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }

    cout << "Binary value of  is ::" << ans << endl;
}