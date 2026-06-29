#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int b[m];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    // First array print karo
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    // Second array ke unique elements print karo
    for(int i = 0; i < m; i++) {
        int found = 0;

        for(int j = 0; j < n; j++) {
            if(b[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0)
            cout << b[i] << " ";
    }

    return 0;
}