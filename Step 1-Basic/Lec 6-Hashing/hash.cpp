#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements one by one: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hashSize = 13; // Adjust the size of the hash array to a larger value if needed
    int *hash = new int[hashSize]{0}; // Initialize all elements to zero

    // Populate the hash table
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < hashSize) { // Ensure array values are within bounds
            hash[arr[i]] += 1;
        } else {
            cout << "Error: Value " << arr[i] << " out of range for hash table." << endl;
            return 1; // Exit with an error code
        }
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cin >> number;

        if (number >= 0 && number < hashSize) {
            cout << "Count of " << number << " is: " << hash[number] << endl;
        } else {
            cout << "Error: Query number " << number << " is out of range." << endl;
        }
    }

    // Free dynamically allocated memory
    delete[] arr;
    delete[] hash;

    return 0;
}
