#include <iostream>
using namespace std;

//parametrrized
void psum(short N,short sum){
    if(N<1){
        cout<<sum;
        return;
    }
    psum(N-1,sum+N);
}
//functional
int fsum(short N){
    if(N==0){
        return 0;
    }
    else{
        return N+fsum(N-1);
    }
}

int main(){
    short N,a,sum=0;
    cout<<"Enter a number "<<endl;
    cin>>N;
    psum(N,sum);
    cout<<endl;
    a=fsum(N);
    cout << a;
    return 0;
}