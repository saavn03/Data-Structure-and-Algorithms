
#include<iostream>
#include<limits.h>
#include<math.h>

using namespace std;

int power(int x, int n){
    int temp = pow(x,n/2);
    temp = temp * temp ;
    if(n%2 == 0){
        return temp;
    }
    else{
        return temp*x;
    }
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