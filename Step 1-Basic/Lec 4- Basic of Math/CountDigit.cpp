#include <iostream>
#include <math.h>
using namespace std;
main(){
    cout<<"Enter a number"<<endl;
    int N;
    cin>>N;
    short count=0;
    // if (N==0)
    // {
    //     count=1;
    // }
    // while(N>0){
    //     // N%=10;
    //     count++;
    //     N/=10;
    // }
    // cout<<count;

    count =short(log10(N)+1);
    cout<<count;
    return 0;
}

// The TC is O<log10 (N))  if divisible by 5 the log 5 and so on