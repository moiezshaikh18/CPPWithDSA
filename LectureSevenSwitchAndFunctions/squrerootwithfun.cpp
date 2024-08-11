#include <iostream>
using namespace std;

int power(int num, int powOfnum)
{
    int ans = 1;
    for (int i = 1; i <= powOfnum; i++)
    {
        ans = ans * num;
    }
    cout << ans << endl;
    return ans;
}

int main()
{
    int num;
    int powOfnum;

    cout << "Enter Number:- ";
    cin >> num;

    cout << "Enter Power Of Number:- ";
    cin >> powOfnum;

    power(num, powOfnum);
}

// output
// Enter Number:- 5
// Enter Power Of Number:- 4
// 625