#include<iostream>
#include<limits>
#include<math.h>

using namespace std;
// Euclidean algorithm
int gcd(int a ,int b){
    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    
    }
    return a;
}
    
int main(){
    int num1,num2;
    cout<<"Enter Number:";

    cin>>num1>>num2;

    cout<<gcd(num1,num2);

    return 0;
}