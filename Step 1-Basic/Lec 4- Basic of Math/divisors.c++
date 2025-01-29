// #include <iostream>
// using namespace std;

// main(){
//     short N;
//     cout<<"Enter a Number"<<endl;
//     cin>>N;
//     for (short i = 1; i <=N; i++)
//     {
//         if (N%i==0)
//         {
//             cout<<i<<" ";
//         }
        
//     }
    
//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

main(){
    short N;
    cout<<"Enter a Number"<<endl;
    cin>>N;
    for (short i = 1; i <=sqrt(N); i++)
    {
        if (N%i==0)
        {
            cout<<i<<" "<<N/i<<" ";
        }
        
    }
    
    return 0;
}