#include <iostream>
using namespace std;
// TC is  O n2
void selection(int arr[],short n){
    for(short i=0;i<=n-2;i++){
            short min=i;
        for(short j=1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        short temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    short n;
    cout<<"Enter a number ";
    cin>>n;
    int arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];
    selection(arr,n);
    for(short i=0;i<n;i++) cout<<arr[i]<<" ";
}