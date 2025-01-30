#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Enter a number: ";
    short n;
    cin >> n;

    short count=0,maxx=0;
    short arr[n];
    cout << "Enter the elements: ";
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(short i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxx=max(count,maxx);
        }
        else{
            count=0;
        }
    }
    cout<<maxx;
    return 0;
}