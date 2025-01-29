#include <iostream>
using namespace std;
// Given array is sorted
int main(){
    cout<<"Enter a number ";
    short n;
    cin>>n;
    short arr[n];
    for(short i=0;i<n;i++)cin>>arr[i];

    //Brute force can be done using set or map 
    //optimal is two pointer
    // short i=0;
    // for(short j=1;j<n;j++){
    //     if(arr[i]!=arr[j]){
    //         arr[i+1]=arr[j];
    //         i++;
    //     }
    // }
    // for(short a=i+1;a<n;a++) arr[a]=-1;

    //Optimal
    for(short a=0;a<n;a++) cout<<arr[a]<<" ";
    return 0;

}