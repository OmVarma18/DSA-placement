#include <iostream>
#include <vector>
using namespace std;
//methord 1 det
//met 2 two pointer
int main(){
    short n1=5,n2=5;
    vector <short> vec;
    int arr1[n1],arr2[n2];
    for(short i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(short i=0;i<n1;i++){
        cin>>arr2[i];
    }
    int i =0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(vec.size()==0|| vec.back()!=arr1[i]){
                vec.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(vec.size()==0|| vec.back()!=arr2[j]){
                vec.push_back(arr2[j]);
            }
            j++;
        }
    }

      while (i < n1) {
        if (vec.size() == 0 || vec.back() != arr1[i]) {
            vec.push_back(arr1[i]);
        }
        i++;
    }

    // Handle remaining elements in arr2
    while (j < n2) {
        if (vec.size() == 0 || vec.back() != arr2[j]) {
            vec.push_back(arr2[j]);
        }
        j++;
    }

    // Output the merged vector
    cout << "Merged array without duplicates: ";
    for (short k = 0; k < vec.size(); k++) {
        cout << vec[k] << " ";
    }
    cout << endl;

    return 0;
}