#include <iostream>
#include <math.h>
using namespace std;

int main(){
    short a,b,gcd=1;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Enter a number"<<endl;
    cin>>b;   
    // Met1 
    // for (short i = 1; i <=a; i++)
    // {
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //     }
    // }

    //Met 2
    // for(short i=1;i<=min(a,b);i++){
    //     if(a%i==0 && b%i==0){
    //      gcd=i;
    //      }
    // }

    //Met 3
    // for(short i=min(a,b);i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }

    //Met 4 Eucladian 
    while (a!=0 && b!=0)
    {
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }
    }
    if(a==0)
        cout<<b;
    else
     cout<<a;
    
    return 0;
}