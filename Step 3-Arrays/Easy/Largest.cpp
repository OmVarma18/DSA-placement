#include <iostream>
using namespace std;
// brute force will be to 
int main(){
    cout<<"Enter a number ";
    short n;
    cin>>n;
    short arr[n];
    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    for(short i=0;i<n;i++) cin>>arr[i];

    short large=0;
    for(int i=0;i<n; i++){
        if(large<arr[i]) large=arr[i];
    }
    cout<<large;
}