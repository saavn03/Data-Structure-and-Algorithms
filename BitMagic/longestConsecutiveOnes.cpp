#include<bits/stdc++.h>
using namespace std;

 int maxConsecutiveOnes(int N)
    {
        // code here
        int count=0;
        while(N>0){
            N = (N&(N<<1));
            count++;
        }
        return count;
    }

int main(){
    int n;
    cin>>n;

    cout<<maxConsecutiveOnes(n)<<endl;
}