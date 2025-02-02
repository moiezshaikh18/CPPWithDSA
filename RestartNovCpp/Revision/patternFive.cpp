#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please Enter the number of star" << endl;
    cin >> num;

    // star normal pattern
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    char ch = 'A';

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}
