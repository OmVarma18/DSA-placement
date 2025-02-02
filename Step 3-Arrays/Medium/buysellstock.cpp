#include <iostream>
using namespace std;

int main() {
    cout << "Enter the size of the array: ";
    short n;
    cin >> n;

    short arr[n];
    cout << "Enter the prices: ";
    for (short i = 0; i < n; i++) cin >> arr[i];

    short buy = arr[0];     // Initial buying price
    short maxp = 0;         // Maximum profit

    for (short i = 1; i < n; i++) {  // Start from the second element
        if (arr[i] < buy) {
            buy = arr[i];  // Found a lower price, update buy
        } else {
            short profit = arr[i] - buy;  // Calculate profit if selling today
            maxp = max(maxp, profit);     // Update max profit if it's higher
        }
    }

    cout << "Maximum profit is: " << maxp << endl;
    return 0;
}
