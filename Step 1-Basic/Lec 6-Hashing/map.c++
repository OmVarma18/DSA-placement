#include <iostream>
#include <map>
using namespace std;

int main(){
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto i:mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cin >> number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}