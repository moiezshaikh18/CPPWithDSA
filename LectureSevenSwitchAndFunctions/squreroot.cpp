#include <iostream>
using namespace std;

int main()
{
    int num;
    int powOfnum;

    cout << "Enter Number:- ";
    cin >> num;

    cout << "Enter Power Of Number:- ";
    cin >> powOfnum;

    int ans = 1;
    for (int i = 1; i <= powOfnum; i++)
    {
        ans = ans * num;
    }

    cout << ans << endl;
}

// output
// Enter Number:- 5
// Enter Power Of Number:- 4
// 625