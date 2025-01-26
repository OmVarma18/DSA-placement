#include <iostream>
using namespace std;

void name(short i,short N){
    if(i>N){
        return;
    }
    cout<<i<<" ";
    name(i+1,N);
}

void num(short i,short N){
    if (i<1)
    {
        return;
    }
    num(i-1,N);
    cout<<i<<" ";
}

main(){
    cout<<"Enter the number"<<endl;
    short N;
    cin>>N;
    name(1,N);
    cout<<endl;
    num(N,N);
    return 0;
}