#include<iostream>
#include<limits>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    if(num == 2 || num == 3){
        return true;
    }
    if(num%2 == 0 || num%3 == 0){
        return false;
    }
    for(int i=5;i*i<num;i=i+6){
        if(num%i== 0 || num%(i+2)== 0){
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