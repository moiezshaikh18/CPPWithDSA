#include <iostream>
using namespace std;

int main()
{
    int fahrenheit;

    cout << "Enter Tempreture In Fehrenheit:";
    cin >> fahrenheit;

    int celsius;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature In celsius :" << celsius << "c'";
}