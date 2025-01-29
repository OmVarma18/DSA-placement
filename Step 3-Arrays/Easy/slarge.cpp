#include <iostream>
#include <climits>
using namespace std;
/*without sorting
Brute force will be N log N(sorting) +N(searching)
better
O(2n) for largest then another loop for slarge condition if(arr[i]>slarge&& slarge!=large)


*/
int main(){
    cout<<"Enter a number ";
    short n;
    cin>>n;
    short arr[n];
    cout<<"Enter the elements ";
    for(short i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    short l=arr[0],sl=SHRT_MIN;
    short s=arr[0],ss=SHRT_MAX;
    for(short i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
            if(arr[i]>sl&& arr[i]!=l){ 
                sl=arr[i];
            }
        }
    for(short i=1;i<n;i++){
        if(arr[i]<s){
            ss=s;
            s=arr[i];
        }
        if(arr[i]<ss&&arr[i]>s){
            ss=arr[i];
        }
    }
    cout<<"Second largest"<<sl<<endl;
    cout<<"Second smallest"<<ss;
    return 0;
}