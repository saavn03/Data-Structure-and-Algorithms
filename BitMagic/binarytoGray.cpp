#include<iostream>

using namespace std;

int greyConverter(int n)
    {
        
        // Your code here
        // int res;
        // res = n^(n>>1);
        // return res;
        return n^(n>>1);
        
    }

int main(){
    int n;
    cin>>n;
    cout<<greyConverter(n)<<endl;
}