#include<iostream>
#include<limits.h>
using namespace std;

bool powerOfTow(int n){
    if(n == 0){
        return false;
    }
    while(n != 1){
        if(n%2 != 0){
            return false;
        }
        return true;
    }
}

int main(){
    int number;
    cin>> number;

    cout<<powerOfTow(number);

    return 0;
}