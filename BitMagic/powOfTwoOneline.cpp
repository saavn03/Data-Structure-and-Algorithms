#include<iostream>
#include<limits.h>
using namespace std;

bool powerOfTow(int n){
   
    return ((n != 0) && (n&(n-1)) == 0);
}

int main(){
    int number;
    cin>> number;

    cout<<powerOfTow(number);

    return 0;
}