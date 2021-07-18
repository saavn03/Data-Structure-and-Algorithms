#include<bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        int temp=n>>k;
        while(n>0){
            if(temp%2 != 0){
                return true;
            }
            return false;
        }
    }

int main(){
    long long n;
    cin>>n;
    int k;
    cin>>k;
    if(checkKthBit(n,k)){
        cout<<" yes "<<endl;
    }
    else{
        cout<<" no "<<endl;
    }
}