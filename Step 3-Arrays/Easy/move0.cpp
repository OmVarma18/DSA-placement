#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter a number: ";
    short n;
    cin >> n;

    short arr[i];
    cout << "Enter the elements: ";
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Temporary vector to hold non-zero elements
    vector<short> temp;

    // Collect non-zero elements in temp
    for (short i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Clear the original array and fill it with non-zero elements
    // followed by 0s to maintain the size
    for (short i = 0; i < temp.size(); i++) {
        arr[i] = temp[i];
    }
    for (short i = temp.size(); i < n; i++) {
        arr[i] = 0;
    }

    // Output the modified array
    cout << "Array after moving zeros to the end: ";
    for (short i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
