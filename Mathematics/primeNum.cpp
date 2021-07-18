#include<iostream>
#include<limits>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout<<"Cheak for Prime:";
    cin>>number;

    if(isPrime(number)== true){
        cout<<"\nYes";
    }
    else{
        cout<<"\nNo.";
    }


    return 0;
}