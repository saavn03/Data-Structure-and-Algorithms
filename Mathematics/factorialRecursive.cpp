#include<iostream>
#include<limits>

using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n*fact(n-1);
    }
int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

   cout<<fact(number);

    return 0;
}