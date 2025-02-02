#include <iostream>
using namespace std;
/*
brutte is N3 ,here we take i from 0 to n j from i to n and k from i to j sum is 0 which is declared in j loop before k
better is N2, here we declare sum in i before j and every time we add only arr[j]
optimal kadanes algo
*/
int main(){
    cout<<"Enter the size of the array";
    short n,t,sum=0,max1=INT8_MIN,start=-1,end=-1;
    cin>>n;
    short arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter the target";
    cin>>t;
    for(short i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>max1){
            max1=sum;
            end=i;
        }
        
        if(sum<0)
            sum=0;
       
    }
    cout<<max1<<" start "<<start<<" end "<<end;
    return 0;
}