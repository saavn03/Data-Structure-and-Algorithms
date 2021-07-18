#include<iostream>
#include<limits.h>

using namespace std ;

int countSetBit(int n){
    int res = 0;
    while(n>0){
        // if(n&1 == 1)
        if(n%2 != 0){  // means last bit is not = 0
            res++;
        }
        n = n/2;      //remove last bit
        //n = n>>1;
    }
    return res;
}

int main(){
    int num ;
    cout<<"Enter number:";
    cin>>num;

    cout<<countSetBit(num);
    return 0;
}