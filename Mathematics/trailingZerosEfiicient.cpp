#include<iostream>
#include<limits>
using namespace std;

int trailingZeros(int n){
    int result = 0;
    for(int i = 5;i<=n;i=i*5){
        result = result + n/i;
    }
    return result;
}

int main(){
    int number;
    cin>>number;

    cout<<trailingZeros(number);
}