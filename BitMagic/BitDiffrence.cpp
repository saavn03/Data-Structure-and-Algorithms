#include<bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b){
        
        // Your logic here
        int c = a^b;
        int count=0;
        while(c>0){
        if(c%2 == 1){
            count++;
        }
        c = c/2;
        }
        return count;
    }

int main(){
    int a,b;
    cin>>a>>b;
    cout<<countBitsFlip(a,b)<<endl;
}