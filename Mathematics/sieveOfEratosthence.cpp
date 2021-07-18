#include<iostream>
#include<limits.h>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i=2;i*i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printAllPrime(int n){
   for(int i=2;i<=n;i++){
       if(isPrime(i)){
          cout<<i<<" ";
       }
   }  
}

int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

    printAllPrime(number);

    return 0;
}