#include <iostream>
using namespace std;
// Tc is N*log N
void merge(int arr[], short low, short mid, short high) {
    short left = low;
    short right = mid + 1;

    // Temporary array to store merged elements
    int temp[high - low + 1];
    short k = 0;

    // Merge elements into the temporary array
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
        }
    }

    // Copy any remaining elements from the left subarray
    while (left <= mid) {
        temp[k++] = arr[left++];
    }

    // Copy any remaining elements from the right subarray
    while (right <= high) {
        temp[k++] = arr[right++];
    }

    // Copy merged elements back into the original array
    for (short i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }
}

void mergeS(int arr[], short low, short high) {
    if (low >= high) return;
    short mid = (low + high) / 2;

    // Correct recursive calls
    mergeS(arr, low, mid);       // Sort left half
    mergeS(arr, mid + 1, high); // Sort right half

    // Merge the sorted halves
    merge(arr, low, mid, high);
}

int main() {
    short n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (short i = 0; i < n; i++) cin >> arr[i];

    mergeS(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (short i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
