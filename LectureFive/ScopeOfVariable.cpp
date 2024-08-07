#include <iostream>
using namespace std;

int main()
{
    int a = 3;

    cout << a << endl;

    if (a)
    {
        int a = 5;
        cout << "Inner :-" << a;
    }
}