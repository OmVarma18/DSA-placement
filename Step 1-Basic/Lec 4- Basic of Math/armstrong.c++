#include <iostream>
using namespace std;
main(){
    short N,D,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>N;
    // if (N==0)
    // {
    //     cout<
    // }
    
    D=N;
    while(D>0){
        short Last=D%10;
        sum=sum+(Last*Last*Last); 
        D/=10;    
    }
    if (sum==N)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not an armstrong";   
    }
    
    return 0;
}
