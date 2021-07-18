#include<iostream>
#include<limits>

using namespace std;

int countTralingZeros(int n){
    int res = 0;
    for(int i = 5;i <= n;i=i*5){
        res = res + (n/i);
    }
    return res;
}
int main(){
    int number;
    cin>>number;

    cout<<countTralingZeros(number);

    return 0;
}