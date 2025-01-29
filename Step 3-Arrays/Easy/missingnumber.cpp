#include <iostream>
using namespace std;
//briute force O(n^2) since there are 2 loops one for num one for searching num will always be from 1 to N sorted
// better hashing O(2n)
//  optimal 2 met use sum formula N(N+1)/2 xor of same number is 0 a^a=0 0^a=a
int main(){
    cout<<"Enter a number ";
    short  n;
    cin>>n;
    int arr[n-1];
    for(short i=0;i<n-1;i++){
        cin>>arr[i];
    }
    short sum=0,total=(n*(n+1))/2;
    for(short i=0;i<n-1;i++){
        sum+=arr[i];
    }
    cout<< total-sum;
    return 0;
}