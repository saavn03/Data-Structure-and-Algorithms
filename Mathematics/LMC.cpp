#include<iostream>
#include<limits>
#include<math.h>

using namespace std;

int lcm(int a, int b){
    int result = max(a,b);
    while(result != 0){
        if(result%a == 0 && result%b == 0){
          break;
        }
        result++;
    }
    return result;
}


int main(){
    int num1,num2;
    cout<<"Enter Number:";

    cin>>num1>>num2;

    cout<<lcm(num1,num2);

    return 0;
}