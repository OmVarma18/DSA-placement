#include <iostream>
using namespace std;
main(){
    cout<<"Enter a number";
    short N,Z;
    cin>> N;
    Z=N;
    short RN=0;
    while(Z>0){
        short a=Z%10;
        RN=(RN*10)+a;
        Z/=10;
    }
    if (N==RN)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Plaindrome";
    }
    
    
    return 0;
}