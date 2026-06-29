#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {

        cout << "\n1. Display";
        cout << "\n2. Sum";
        cout << "\n3. Maximum";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;

                for(int i = 0; i < n; i++)
                    sum += arr[i];

                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];

                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Maximum = " << max;
                break;
            }

            case 4:
                cout << "Exit";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}