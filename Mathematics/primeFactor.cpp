#include<iostream>
#include<limits.h>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void primeFactor(int num){
    for(int i=2;i<=num;i++){
        if(isPrime(i)){
            int x=i;
            while(num%x == 0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

int main(){
    int number;
    cout<<"Cheak for Prime:";
    cin>>number;

    primeFactor(number);

    return 0;
}