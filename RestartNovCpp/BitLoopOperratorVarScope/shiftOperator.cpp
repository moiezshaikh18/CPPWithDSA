#include <iostream>
using namespace std;

int main()
{

    cout << "Right Shift:" << (17 >> 1) << endl;
    cout << "Right Shift:" << (17 >> 2) << endl;
    cout << "Left Shift:" << (19 << 1) << endl;
    cout << "Left Shift:" << (21 << 2) << endl;

    int i = 7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
}