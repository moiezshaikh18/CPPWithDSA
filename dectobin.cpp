#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;

    int i = 0;
    int ans = 0;
    while (num != 0)
    {
        int digit = num & 1;
        ans = (digit * pow(10, i) + ans);
        num = num >> 1;
        i++;
    }

    cout << "Binary Number is ::" << ans << endl;
}