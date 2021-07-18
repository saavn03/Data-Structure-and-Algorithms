#include<iostream>
#include<limits>

using namespace std;

bool palindromeNumber(int x){
    int temp = x;
    int rev = 0;
    int ld = 0;

    while(temp != 0){
        ld = temp%10;   // for last digit
        rev = (rev*10) + ld; //to get reverse or save last digit before removal
        temp = temp/10;     //to remove last digit 
    }
    return (rev == x);
}

int main(){
    int number;
    cout<<"Enter Number:";
    cin>>number;

    if(palindromeNumber(number) == true){
    cout<<"Number is Palindrome.";
    }
    else{
        cout<<"\nNumber is not Palindrome.";
    }

    return 0;
}