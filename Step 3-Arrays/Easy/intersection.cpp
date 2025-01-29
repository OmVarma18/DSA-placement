#include <iostream>
#include <vector>
using namespace std;

int main() {
    short n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    cout << "Enter the size of the second array: ";
    cin >> n2;

    int arr1[n1], arr2[n2];
    vector<short> intersection;

    // Input for arr1
    cout << "Enter " << n1 << " elements for the first array: ";
    for (short i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input for arr2
    cout << "Enter " << n2 << " elements for the second array: ";
    for (short i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int i = 0, j = 0;

    // Find intersection of arrays
    while (i < n1 && j < n2) {
        if (arr1[i] == arr2[j]) {
                intersection.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    // Output the intersection vector
    if (intersection.size() == 0) {
        cout << "No intersection found." << endl;
    } else {
        cout << "Intersection of arrays: ";
        for (short k = 0; k < intersection.size(); k++) {
            cout << intersection[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
