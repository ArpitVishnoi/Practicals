#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    if(!((n%2==0 && n>=4) || (n%3==0 && n>=9) || (n%5==0 && n>=25))){
        cout<<"Prime";
    }
    else{
        cout<<"Non Prime";
    }
}