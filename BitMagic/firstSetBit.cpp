#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int position = 1;
        if(n == 0){
            return 0;
        }
        while(n>0 && n != 0){
            if(n%2 != 0){
                return position;
            }
            n=n/2;
            position++;
        }
    }

int main(){
    int n;
    cin>>n;

    cout<<getFirstSetBit(n);
}