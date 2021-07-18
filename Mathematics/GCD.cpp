#include<iostream>
#include<limits>
#include<math.h>

using namespace std;

int gcd(int a ,int b){

    int result= min(a,b);

    while(result>0){
        if(a%result == 0 && b%result == 0){
            break;
        }
        result--;
    }
    return result;
}

int main(){
    int num1,num2;
    cout<<"Enter Number:";

    cin>>num1>>num2;

    cout<<gcd(num1,num2);

    return 0;
}