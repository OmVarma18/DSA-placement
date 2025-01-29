#include <iostream>

using namespace std;
bool palin(short i,string s){
    if(i>s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1])
      return false;
    palin(i+1,s);
}

int main(){
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    bool ans=palin(0,s);
    if(ans){
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
}