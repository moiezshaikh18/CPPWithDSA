// Que:-  find give charchter is "LowerCase","UpperCase" or "Numeric"

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter Charchter" << endl;
    cin >> ch;

    if (ch > 96 && ch < 123)
    {
        cout << "LowerCase" << endl;
    }
    else if (ch > 64 && ch < 91)
    {
        cout << "UpperCase" << endl;
    }
    else
    {
        cout << "Numeric";
    }
}