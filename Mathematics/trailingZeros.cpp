#include<iostream>
#include<limits>

using namespace std;
// ineficient method
int trailingZeros(int n){

    int fact=1;
    for(int i=2;i<=n;i++){
        fact = fact * i;
    }

    int result = 0;
    while(fact%10 == 0){
        result++;
        fact = fact/10;
    }
    return result;
}

int main(){
    int number;
    cin>>number;

    cout<<trailingZeros(number);

    return 0;
}