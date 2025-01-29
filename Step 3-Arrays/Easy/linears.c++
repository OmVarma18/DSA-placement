#include <iostream>
using namespace std;

int main(){
    short n;
    cin>>n;
    short arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter the number you want to search";
    short nu;
    cin>>nu;
    for(int i=0;i<n;i++) {
        if(arr[i]==nu)
         cout<<"Present"<<i;
    }
    return 0;
}