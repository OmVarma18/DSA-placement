#include <iostream>
#include <map>
using namespace std;
/*
Brute-pick up one element then itterate the entire elemet O(n2)
better is hashing O(n)
*/
int main(){
    // brute
    short n;
    cout<<"Enter the size of array";
    cin>> n;
    short nums[n];
    for(short i=0;i<n;i++) cin>>nums[i];
    //brute
    // int majorityElement = -1;
    // for (int i = 0; i < n; ++i) {
    //     int count = 0;
    //     for (int j = 0; j < n; ++j) {
    //         if (nums[j] == nums[i]) {
    //             count++;
    //         }
    //     }
    //     if (count > n / 2) {
    //         majorityElement = nums[i];
    //         break;  // Exit as soon as the majority element is found
    //     }
    // }
    //Better
    // map<short,short> mpp;
    // for(short i=0;i<n;i++){
    //     mpp[nums[i]]++;
    // if(mpp[nums[i]]>>n/2){
    //     cout<<nums[i];
    //     break;
    //     }
    // }

    //optimal-moon's voting algo
    int count=0,num;
    //find canidate
    for(short i=0;i<n;i++){
        if(count==0){
            count=1;
            num=nums[i];
        }
        else if(num==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    //validte canidateṇ
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == num) {
            count++;
        }
    }
    if(count>=n/2){
        cout<<num;
    }
    else{
        cout<<"No majority";
    }

    return 0;
}