#include <iostream>
using namespace std;

int main()
{
    int num = 'A';

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;

    case 2:
        cout << "Second" << endl;
        break;

    default:
        cout << "It is a default case" << endl;
    }

    cout << endl;
}