#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    int ans;

    cout << "Enter First Number:-";
    cin >> a;

    cout << "Enter Second Number:-";
    cin >> b;

    cout << "Enter Operation Want To Perform(+,*,/,-,%) :-";
    cin >> op;

    switch (op)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    case '/':
        ans = a / b;
        break;
    case '%':
        ans = a % b;
        break;
    default:
        cout << "Enter Given Expression Only Thank You !!!";
        break;
    }

    cout << "Given Expression Ans is:- " << op << " " << ans << endl;
}