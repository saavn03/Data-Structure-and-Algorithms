#include<bits/stdc++.h>
using namespace std;

bool isSparse(int n)
    {
        // Your code
        if(n & (n>>1)){
            return false;
        }
        return true;
    }

int main(){
    int n;
    cin>>n;

    if(isSparse(n)){
        cout<<" 1 "<<endl;
    }
    else{
        cout<<" 0 "<<endl;
    }
}