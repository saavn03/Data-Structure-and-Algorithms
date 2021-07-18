#include<iostream>
#include<limits.h>

using namespace std ;
 int grayToBinary(int n)
    {
        
        // Your code here
        return n^(n<<1);
       
        
    }

int main(){
    int num ;
    cout<<"Enter number:";
    cin>>num;

    cout<<grayToBinary(num);
    return 0;
}