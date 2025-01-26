#include <iostream>
using namespace std;
short ct=0;
void print(){
    if (ct==3)
    {
        cout<<ct;
        return;
    }
    else{
        ct++;
        print();
    }
    
}

int main(){
    print();
    return 0;
}