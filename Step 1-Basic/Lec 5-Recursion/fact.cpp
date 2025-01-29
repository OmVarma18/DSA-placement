#include <iostream>
using namespace std;

int fact(short N){
    if(N==1){
        return 1;
    }
    return N*fact(N-1);
}
main(){
    cout<<"Enter a Number ";
    short N,prod;
    cin>>N;
    prod=fact(N);
    cout<<prod;
}