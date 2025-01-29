#include <iostream>
using namespace std;
main(){
    cout<<"Enter a number";
    short N;
    cin>> N;
    short RN=0;
    while(N>0){
        short a=N%10;
        RN=(RN*10)+a;
        N/=10;
    }
    cout<<RN;
    return 0;
}