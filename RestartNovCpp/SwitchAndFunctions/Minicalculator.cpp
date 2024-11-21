#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    char operation;
    int ans;

    cout << "Enter the value of number 1:" << endl;
    cin >> num1;

    cout << "Enter the value of number 2:" << endl;
    cin >> num2;

    cout << "Enter the operation that you want to perform:" << endl;
    cin >> operation;

    switch (operation)
    {

    case '+':
        cout << "Addition of 2 Number is ::" << num1 + num2 << endl;
        break;

    case '-':
        cout << "Substraction of 2 Number is ::" << num1 - num2 << endl;
        break;

    case '*':
        cout << "Multiplication of 2 Number is ::" << num1 * num2 << endl;
        break;

    case '/':
        cout << "Division of 2 Number is ::" << num1 / num2 << endl;
        break;

    case '%':
        cout << "Mod of 2 Number is ::" << num1 % num2 << endl;
        break;

    default:
        cout << "Please enter valid operation(+,-,*,/,%) from this....Thank you" << endl;
    }
}