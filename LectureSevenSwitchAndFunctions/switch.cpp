#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter Number:- ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        break;
    case 2:
        cout << "Second" << endl;
        break;
    default:
        cout << "None of Them" << endl;
        break;
    }
}