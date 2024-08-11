#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    int count100 = 0, count50 = 0, count20 = 0, count10 = 0, count1 = 0;

    cout << "Enter Amount:-";
    cin >> a;

    if (a >= 100)
    {
        b = 100;
    }
    else if (a >= 50)
    {
        b = 50;
    }
    else if (a >= 20)
    {
        b = 20;
    }
    else if (a >= 10)
    {
        b = 10;
    }
    else if (a >= 1)
    {
        b = 1;
    }

    switch (b)
    {
    case 100:
        count100 = a / 100;
        a = a % 100;

    case 50:
        count50 = a / 50;
        a = a % 50;

    case 20:
        count20 = a / 20;
        a = a % 20;

    case 10:
        count10 = a / 10;
        a = a % 10;

    case 1:
        count1 = a / 1;
        a = a % 1;
        break;
    default:
        cout << "Enter Valid Note Thank You !!!";
        break;
    }

    cout << "100 : -" << count100 << endl;
    cout << "50 : - " << count50 << endl;
    cout << "20 : - " << count20 << endl;
    cout << "10 : - " << count10 << endl;
    cout << "1 : - " << count1 << endl;

    return 0;
}