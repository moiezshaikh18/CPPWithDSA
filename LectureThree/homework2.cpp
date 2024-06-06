#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = a + 1;

    cout << a << endl;
    cout << b << endl;

    if ((a = 3) == b)
    {
        cout << a << "From If block" << endl;
    }
    else
    {
        cout << a + 1 << "From else block" << endl;
    }
}