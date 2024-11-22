#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount:--";
    cin >> amount;

    int count100 = 0, count50 = 0, count20 = 0, count10 = 0, count1 = 0;

    count100 = amount / 100;
    amount = amount % 100;

    count50 = amount / 50;
    amount = amount % 50;

    count20 = amount / 20;
    amount = amount % 20;

    count10 = amount / 10;
    amount = amount % 10;

    count1 = amount / 1;
    amount = amount % 1;

    cout << "Count100:" << count100 << endl;
    cout << "count50:" << count50 << endl;
    cout << "count20:" << count20 << endl;
    cout << "count10:" << count10 << endl;
    cout << "count1 :" << count1 << endl;
}