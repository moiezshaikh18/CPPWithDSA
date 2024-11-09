#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    cout << a << " Size OF:" << sizeof(a) << endl;

    char ch = 'A';
    cout << ch << " Size OF:" << sizeof(ch) << endl;

    bool b1 = true;
    cout << b1 << " Size OF:" << sizeof(b1) << endl;

    float f = 1.2;
    cout << f << " Size OF:" << sizeof(f) << endl;

    double d = 1.4532;
    cout << d << " Size OF:" << sizeof(d) << endl;

    cout << "Namsatey Dunia" << endl;

    unsigned int c = 123; // For only +ve numbers
    cout << c << endl;

    int divideNumber = 2 / 5; // Output will be zero
    cout << divideNumber << endl;

    int num1 = 2;
    int num2 = 3;

    cout << (num1 == num2) << " num1 == num2" << endl;
    cout << (num1 < num2) << " num1 < num2 " << endl;
    cout << (num1 > num2) << " num1 > num2 " << endl;
    cout << (num1 <= num2) << " num1 <= num2" << endl;
    cout << (num1 >= num2) << " num1 >= num2" << endl;
    cout << (num1 != num2) << " num1 != num2" << endl;

    int number = 23; // convert 0 to 1 and 1 to 0
    cout << !number << endl;
}