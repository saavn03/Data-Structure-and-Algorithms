#include<iostream>
#include<limits>
#include<math.h>

using namespace std;

int countDigits(int x){
   
   return floor(log10(x)+1);
}

int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

    cout<<"Number of digits are/is :"<<countDigits(number);
    return 0;
}