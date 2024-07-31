#include <iostream>
using namespace std;

int main()
{

    cout << "Right shift" << endl;
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << "left shift" << endl;
    cout << (19 << 1) << endl;
    cout << (19 << 2) << endl;

    int i = 7;

    cout << (i++) << endl;
    cout << (++i) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
}