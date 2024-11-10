#include <iostream>
using namespace std;

int fahraneitTemp(int fahraneit)
{
    int cel = (fahraneit - 32) * 5 / 9;
    return cel;
}

int main()
{
    int fahraneit;
    cout << "Enter Faharaneit value::->> " << endl;
    cin >> fahraneit;

    double celciuous = fahraneitTemp(fahraneit);

    cout << "faharanite to celcious value is::--->  " << celciuous << endl;
}