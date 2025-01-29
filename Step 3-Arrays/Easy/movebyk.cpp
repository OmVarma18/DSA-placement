#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    short n;
    cin >> n;

    cout << "Enter by how much you want to move the array: ";
    short k;
    cin >> k;  // This variable will hold how many positions we want to rotate

    // Ensure k is within the range of array length (to avoid unnecessary rotations)
    k = k % n;

    short arr[n];
    cout << "Enter the elements: ";
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Rotate the array to the left by 'k' positions
    // Using temporary storage to hold the first k elements
    short temp[k];
    for (short i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of the array
    for (short i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    // Move the temporary array elements to the end of the array
    for (short i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    // Output the rotated array
    cout << "Array after rotation: ";
    for (short i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
