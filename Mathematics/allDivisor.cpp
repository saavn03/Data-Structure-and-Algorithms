#include<iostream>
#include<limits.h>

using namespace std;

void allDivisor(int num){
    for(int i=1;i<=num;i++){
        if(num%i == 0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int number;
    cout<<"Enter Number:";

    cin>>number;

    allDivisor(number);

    return 0;
}