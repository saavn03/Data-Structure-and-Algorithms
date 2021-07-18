#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n){
        
        // Your code here 
        if(n == 0){
                return false;
        }
        // ceil returns integer if floor and integer is same means ans is integer 
        return (ceil(log2(n))==floor(log2(n)));
        
    }

int main(){
    long long n;
    cin>>n;

    if(isPowerofTwo(n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}