#include<iostream>
#include<limits.h>

using namespace std ;

void kthBit(int n,int k){
    // if k  = 6 thenleft shift by(<<)  k-1 = 5
    if(((n>>(k-1)) & 1)==1){
        cout<<" Yes" ;
    }
    else{
        cout<<"No";
    }
}

int main(){
    int num , kth;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Enter Value of K:";
    cin>>kth;

    kthBit(num,kth);

    return 0;
}