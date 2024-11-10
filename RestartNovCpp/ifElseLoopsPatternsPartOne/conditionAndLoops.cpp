#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please Enter Number:--> " << endl;
    cin >> n;

    if (n > 0)
    {
        cout << "+ve" << endl;
    }
    else
    {
        cout << "-ve" << endl;
    }

    cout << "----------------------||----------------------" << endl;
    int a, b;
    cout << "Enter the value of a:--> " << endl;
    cin >> a;
    cout << "Enter the value of b:--> " << endl;
    cin >> b;

    if (a > b)
    {
        cout << "A is greatest";
    }
    else
    {
        cout << "B is greatest";
    }
}