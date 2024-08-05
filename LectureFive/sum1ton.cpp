#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    cout << "Enter Number:-";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum of 1 to n is:- " << sum << endl;
}

// output:-
//  Enter Number:-5
// Sum of 1 to n is:-15