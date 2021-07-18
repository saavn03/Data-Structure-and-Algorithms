#include<iostream>
#include<limits>

using namespace std;

int fact(int n){
    
    int result = 1;

    for(int i=2;i<=n;i++){
        result = result * i;
    }
    return result;
}
int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

   cout<<fact(number);

    return 0;
}