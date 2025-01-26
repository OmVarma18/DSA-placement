#include <iostream>
using namespace std;

void revA(short i, short *arr,short n){
    if(i>n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    revA(i+1,arr,n);
}

void swap(short a,short b){
    short temp=a;
    a=b;
    b=temp;
}
int main()
{
    cout<<"Enter the size of the array"<<endl;
    short n;
    cin>>n;
    short *arr=new short[n];
    for(short i=0;i<n;i++){
        cin>>arr[i];
    }
    revA(0,arr,n);
    for(short i=0;i<n;i++)cout<<arr[i]<<" ";  
    return 0;
}