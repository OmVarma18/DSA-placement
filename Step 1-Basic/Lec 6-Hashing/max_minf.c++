#include <iostream>
#include <map>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Invalid array size." << endl;
        return 1;
    }

    int *arr = new int[n]; // Dynamically allocate array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxFreqElement = -1, minFreqElement = -1;

    for (const auto &pair : mpp) {
        int element = pair.first;
        int freq = pair.second;
        if (freq > maxFreq) {
            maxFreq = freq;
            maxFreqElement = element;
        }
        if (freq < minFreq) {
            minFreq = freq;
            minFreqElement = element;
        }
    }

    cout << "Element with the highest frequency: " << maxFreqElement
         << " (Frequency: " << maxFreq << ")" << endl;

    cout << "Element with the lowest frequency: " << minFreqElement
         << " (Frequency: " << minFreq << ")" << endl;

    delete[] arr; // Free dynamically allocated memory
    return 0;
}
