#include <iostream>
#include <map>
using namespace std;
// brute is O(n2)
// better hashing
int main(){
    cout<<"Enter the size of the array ";
    short n,t;
    cin>>n;
    short arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];
    cout<<"target ";
    cin>>t;
    // map<int,int> numm;

    // for(short i=0;i<n;i++){
    //     short comp=t-arr[i];

    //     if(numm.find(comp)!=numm.end()){
    //         cout<< numm[comp]<<" "<<i;
    //         break;
    //     }
    //     numm[arr[i]];
    // }

    //optimal
    short left=0,right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==t){
            cout<<left<<" "<<right;
            break;
        }
        else if(arr[left]+arr[right]<t)
            left++;
        else
          right--;
    }
    return 0;
}