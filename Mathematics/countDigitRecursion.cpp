#include<iostream>
#include<limits>

using namespace std;

int countDigits(int x){
    if(x == 0){
        return 0;
    }
    return 1 + countDigits(x/10);
}

int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

    cout<<"Number of digits are/is :"<<countDigits(number);
    return 0;
}