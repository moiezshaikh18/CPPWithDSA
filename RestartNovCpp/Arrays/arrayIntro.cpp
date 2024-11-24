#include <iostream>
using namespace std;

int main()
{

    // declare
    int number[15];

    cout << "value at 1 index:::" << number[5] << endl;
    cout << "EveryThing is fine" << endl;

    // initialising an array

    int second[3] = {5, 7, 11};

    cout << "Value of second array 2 index::" << second[2] << endl;

    cout << "--------------------------------------------------------------------" << endl;

    int third[15] = {2, 7};

    for (int i = 0; i < sizeof(third) / sizeof(third[0]); i++)
    {
        cout << "Value of third array index:: " << i << " is::" << third[i] << endl;
    }

    cout << "--------------------------------------------------------------------" << endl;

    int fourth[10] = {0};

    for (int i = 0; i < sizeof(fourth) / sizeof(fourth[0]); i++)
    {
        cout << "Value of fourth array index:: " << i << " is::" << fourth[i] << endl;
    }

    cout << "--------------------------------------------------------------------" << endl;

    int fifth[10] = {1};

    for (int i = 0; i < sizeof(fifth) / sizeof(fifth[0]); i++)
    {
        cout << "Value of fifth array index:: " << i << " is::" << fifth[i] << endl;
    }

    cout << "--------------------------------------------------------------------" << endl;

    cout << "-----------------------Initializing array with 1--------------------" << endl;

    int sixth[10];

    for (int i = 0; i < sizeof(sixth) / sizeof(sixth[0]); i++)
    {
        sixth[i] = 1;
        cout << "Value of sixth array index:: " << i << " is::" << sixth[i] << endl;
    }

    cout << "--------------------------------------------------------------------" << endl;
}