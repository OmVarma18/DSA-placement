#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array";
    short n;
    cin>>n;
    short arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    short temp=arr[0];

    for(short i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    for(short i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}