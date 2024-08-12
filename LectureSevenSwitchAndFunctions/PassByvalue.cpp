#include <iostream>
using namespace std;

int dummy(int n)
{
    int ans = n * n;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    n = dummy(n);

    cout << "N from Main Function:-" << n << endl;
}