#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number:";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << "Number:" << i << endl;
        i++;
        // i = i + 1;
    }
}