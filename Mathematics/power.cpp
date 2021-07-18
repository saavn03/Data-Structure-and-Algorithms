// naive solution
#include<iostream>
#include<limits.h>

using namespace std;

int power(int x, int n){
    int result =1;
    for(int i=1;i<=n;i++){
        result = result * x;
    }
    return result;
}

int main(){
    int base,pow;
    cout<<"Enter Base:";
    cin>>base;
    cout<<"Enter Power:";
    cin>>pow;

    cout<<power(base,pow);

    return 0;
}