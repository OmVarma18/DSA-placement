#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the size ";
    short n;
    cin>>n;
    short arr[n];
    bool sorted=true;

    for(short i=0;i<n;i++) cin>>arr[i];

    for(short i=1;i<n-1;i++){
        if(arr[i]<=arr[i-1]){
            sorted=false;
        }
    }
    if(sorted){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is note sorted";
    }
    return 0;
}