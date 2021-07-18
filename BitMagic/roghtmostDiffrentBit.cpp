#include<bits/stdc++.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int position = 1;
        int c= m^n;
        if(m==0){
            if(n%2 != 0){
                return position;
            }
            n=n/2;
            position++;
        }
        if(n==0){
            if(m%2 != 0){
                return position;
            }
            m=m/2;
            position++;
        }
        while (n>0 && m>0){
        if(c%2 != 0){
            return position;
        }
        c=c/2;
        position++;
        }
    }

int main(){
    int m,n;
    cin>>m>>n;
    cout<<posOfRightMostDiffBit(m,n);
}