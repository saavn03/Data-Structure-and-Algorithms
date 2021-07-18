#include<iostream>
#include<limits.h>

using namespace std;

void printAllPrime(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<n;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=n;j++){
                isPrime[j] == false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
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