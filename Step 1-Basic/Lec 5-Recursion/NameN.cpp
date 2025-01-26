#include <iostream>
using namespace std;

void name(short i,short N){
    if(i>N){
        return;
    }
    cout<<"R ";
    name(i+1,N);
}

main(){
    cout<<"Enter the number of times you want to print the name"<<endl;
    short N;
    cin>>N;
    name(1,N);
    return 0;
}