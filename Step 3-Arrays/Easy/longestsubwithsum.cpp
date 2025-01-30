// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;
// /*
// brute O(n3) or O(n2) sc with o1
// better is Hashmap
// optimal is
// */

// vector<int> longestSubarrayWithSum(int arr[], int n, int targetSum) {
//     unordered_map<int, int> prefixMap; // Stores prefix sum and first occurrence index
//     int prefixSum = 0, maxLength = 0, startIndex = -1, endIndex = -1;

//     for (int i = 0; i < n; i++) {
//         prefixSum += arr[i]; // Compute cumulative sum
        
//         // If prefixSum itself equals targetSum, update maxLength
//         if (prefixSum == targetSum) {
//             maxLength = i + 1;
//             startIndex = 0;
//             endIndex = i;
//         }

//         // If (prefixSum - targetSum) exists in map, update maxLength
//         if (prefixMap.find(prefixSum - targetSum) != prefixMap.end()) {
//             int prevIndex = prefixMap[prefixSum - targetSum];
//             int length = i - prevIndex;
//             if (length > maxLength) {
//                 maxLength = length;
//                 startIndex = prevIndex + 1;
//                 endIndex = i;
//             }
//         }

//         // Store first occurrence of prefixSum
//         if (prefixMap.find(prefixSum) == prefixMap.end()) {
//             prefixMap[prefixSum] = i;
//         }
//     }

//     // Return the subarray
//     vector<int> result;
//     if (maxLength > 0) {
//         for (int i = startIndex; i <= endIndex; i++) {
//             result.push_back(arr[i]);
//         }
//     }
//     return result;
// }

// int main() {
//     int n, targetSum;
//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter the target sum: ";
//     cin >> targetSum;

//     vector<int> subarray = longestSubarrayWithSum(arr, n, targetSum);
    
//     if (!subarray.empty()) {
//         cout << "Longest subarray with sum " << targetSum << ": ";
//         for (int num : subarray) {
//             cout << num << " ";
//         }
//         cout << endl;
//     } else {
//         cout << "No subarray found with the given sum." << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

vector<int> longestSubarrayWithSum(int arr[], int n, int targetSum) {
    int left = 0, right = 0;
    int currentSum = 0, maxLength = 0;
    int startIndex = -1, endIndex = -1;

    while (right < n) {
        currentSum += arr[right]; // Expand window by adding right element

        // Shrink window from the left if the sum exceeds targetSum
        while (currentSum > targetSum && left <= right) {
            currentSum -= arr[left];
            left++;
        }

        // If sum equals targetSum, update maxLength and store indexes
        if (currentSum == targetSum) {
            int length = right - left + 1;
            if (length > maxLength) {
                maxLength = length;
                startIndex = left;
                endIndex = right;
            }
        }

        right++; // Move right pointer forward
    }

    // Return the longest subarray
    vector<int> result;
    if (maxLength > 0) {
        for (int i = startIndex; i <= endIndex; i++) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int n, targetSum;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<int> subarray = longestSubarrayWithSum(arr, n, targetSum);

    if (!subarray.empty()) {
        cout << "Longest subarray with sum " << targetSum << ": ";
        for (int num : subarray) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray found with the given sum." << endl;
    }

    return 0;
}
