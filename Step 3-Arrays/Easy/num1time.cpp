#include <iostream>
using namespace std;
// brute force in O(n2) 2 for loops
/* better is by hashmap O(n)
map for biiger values
xor O(n)
*/ 
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
    short xorS=0;
    for(short i=0;i<n;i++){
        xorS^=arr[i];
    }
    cout<<xorS;
    return 0;
}