#include<iostream>
#include<limits.h>
using namespace std;

bool powerOfTow(int n){
    if(n == 0){
        return false;
    }
    return ((n&(n-1))==0);
}

int main(){
    int number;
    cin>> number;

    cout<<powerOfTow(number);

    return 0;
}