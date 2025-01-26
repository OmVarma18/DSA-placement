#include <iostream>
using namespace std;
// TC is  O n2 worst case time  break best is On
void bubble(int arr[],short n){
    for(short i=n-1;i>=0;i--){
        for(short j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                short temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    short n;
    cout<<"Enter a number ";
    cin>>n;
    int arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];
    bubble(arr,n);
    for(short i=0;i<n;i++) cout<<arr[i]<<" ";
}