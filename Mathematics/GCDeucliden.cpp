#include<iostream>
#include<limits>

using namespace std;

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);

}

int main(){
    int num1,num2;
    cout<<"Enter Number:";

    cin>>num1>>num2;

    cout<<gcd(num1,num2);

    return 0;
}