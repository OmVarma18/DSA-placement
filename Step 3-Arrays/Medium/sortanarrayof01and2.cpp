#include <iostream>
using namespace std;
/*brute way is NlogN quick sort or merge
better is counter fro 0 1 and 2 then re ad to the orignal array
optimal dutch national flog
 3 ponter low mid high
*/
int main(){
    cout<<"Enter the size of the array ";
    short n,t;
    cin>>n;
    short arr[n];
    for(short i=0;i<n;i++) cin>>arr[i];

int low=0,mid=0,high=n-1;

while(!(mid>high)){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        mid++;
        low++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[high],arr[mid]);
        high--;
    }

}

for(short i=0;i<n;i++) cout<<arr[i]<<" ";

return 0;
}