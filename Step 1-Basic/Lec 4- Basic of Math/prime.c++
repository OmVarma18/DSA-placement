#include <iostream>
#include <math.h>

using namespace std;
int main(){
    short N;
    bool isPrime=true;
    cout<<"Enter a number"<<endl;
    cin>>N;
    for (short i = 2; i *i<=N; i++)
    {
        if(N%i==0)
          isPrime=false;
    }
    if (isPrime)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}