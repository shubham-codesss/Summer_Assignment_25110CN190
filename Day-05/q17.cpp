#include <iostream>
using namespace std;
int main()
{
    int n;
    int per = 0;
    cout << "Enter a number:";
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            per = per + i;
        }
    }
    if (per == n)
    {
        cout << n << " is perfect number.";
    }
    else
        cout << n << " is not a perfect number.";
}