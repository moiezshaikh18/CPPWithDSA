#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character:--> " << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UpperCase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "LowerCase";
    }
    else
    {
        cout << "Numbers";
    }
}