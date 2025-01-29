#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pvt=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pvt && i<high){
            i++;
        }
        while(arr[j]>pvt && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick(int arr[],int low, int high){
    if(low<high){
        int pvt=partition(arr,low,high);
        quick(arr,low,pvt-1);
        quick(arr,pvt+1,high);        
    }
}

int main(){
    short n;
    cout<<"Enter a number ";
    cin>>n;
    int arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];
    quick(arr,0,n-1);
    for(short i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}