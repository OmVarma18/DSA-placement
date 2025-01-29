#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    short n;
    cin >> n;

    short arr[n];
    cout << "Enter the elements of the array: ";
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }

    short j = 0; // Pointer to track non-zero position
    for (short i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++; // Increment j to the next position
        }
    }

    cout << "Array after moving zeros to the end: ";
    for (short i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
