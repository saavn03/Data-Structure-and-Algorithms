#include <iostream>
#include <limits.h>
using namespace std;

int countDigits(int x)
{
	int count = 0;

	while(x != 0)
	{
			x = x / 10;

			++count;
	}	

	return count;
}

int main() {
    
    	int number;
        cout<<"Enter number: ";
        cin>>number;
    	
    	cout<<countDigits(number);
    	
    	return 0;
}