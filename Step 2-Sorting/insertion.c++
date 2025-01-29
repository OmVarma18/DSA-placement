#include <iostream>
using namespace std;
// TC is  O 
void insertion(int arr[],short n){
    for(short i=1;i<n;i++){
            short j=i;
            while(j>0&&arr[j]<arr[j-1]){
                short temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
            }
        }
    }

int main(){
    short n;
    cout<<"Enter a number ";
    cin>>n;
    int arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];
    insertion(arr,n);
    for(short i=0;i<n;i++) cout<<arr[i]<<" ";
}