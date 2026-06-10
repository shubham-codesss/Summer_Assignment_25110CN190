#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while (y != 0)
    {
        int rem = x % y;
        x = y;
        y = rem;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm;

    return 0;
}