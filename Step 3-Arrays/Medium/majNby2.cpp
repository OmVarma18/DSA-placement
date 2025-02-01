#include <iostream>
using namespace std;
/*
Brute-pick up one element then itterate the entire elemet O(n2)
better is hashing O(n)
*/
int main(){
    // brute
    short n;
    cout<<"Enter the size of array";
    short n;
    short nums[n];
    for(short i;i<n;i++) cin>>nums[i];
    int majorityElement = -1;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            majorityElement = nums[i];
            break;  // Exit as soon as the majority element is found
        }
    }
    return 0;
}