#include <iostream>
using namespace std;

int fib(short a){
    if(a<=1){
        return a;
    }
    return fib(a-1)+fib(a-2);
}
int main(){
    cout<<"Enter a Number ";
    short N;
    cin>>N;
    short a=fib(N);
    cout<<a;
    return 0;
}