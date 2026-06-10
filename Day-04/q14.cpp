#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1;

    for (int i = 3; i <= n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main()
{
    int n;
    cout << "Enter the term: ";
    cin >> n;

    cout << fibo(n);

    return 0;
}