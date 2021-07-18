#include<iostream>
#include<limits>

using namespace std;

// Important formula a*b = gcd(a,b) * lcm(a,b)
// so, from above eqn Lcm(a,b) = a*b/gcd(a,b)

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return(a*b/gcd(a,b));
}

int main(){
    int num1,num2;
    cout<<"Enter Number:";

    cin>>num1>>num2;

    cout<<lcm(num1,num2);

    return 0;
}