#include <iostream>
using namespace std;

void num(short i,short N){
    if (i<1)
    {
        return;
    }
    cout<<i<<" ";
    num(i-1,N);
}

void numb(short i,short N){
    if(i>N){
        return;
    }
    cout<<endl;
    numb(i+1,N);
     cout<<i<<" ";
}
main(){
    cout<<"Enter the number"<<endl;
    short N;
    cin>>N;
    num(N,N);
    numb(1,N);
    return 0;
}

// this will print the num from 1 to N using backtracking
// #include <iostream>
// using namespace std;

// void num(short i,short N){
//     if (i<1)
//     {
//         return;
//     }
//     num(i-1,N);
//     cout<<i<<" ";
// }
// main(){
//     cout<<"Enter the number"<<endl;
//     short N;
//     cin>>N;
//     num(N,N);
//     return 0;
// }