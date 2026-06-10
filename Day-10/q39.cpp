#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // ascending
        for (int j = 1; j <= i; j++)
            cout << j;

        // descending
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    return 0;
}