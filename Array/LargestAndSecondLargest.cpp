//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
    vector<int>solution;
    // There is just one element;
    if(sizeOfArray == 1)
    {
        solution.push_back(arr[0]);
        solution.push_back(-1);
        return solution;
    }
    sort(arr, arr+sizeOfArray);
    // There are two elements
    if(sizeOfArray == 2)
    {
        solution.push_back(arr[1]);
        if(arr[0] == arr[1])
            solution.push_back(-1);
        else
            solution.push_back(arr[0]);
        return solution;
    }
    
    // There are more than three elements
    solution.push_back(arr[sizeOfArray-1]);
    for(int i= sizeOfArray-2; i>=0; i--)
    {
        if(arr[i] < solution[0])
        {
            solution.push_back(arr[i]);
            return solution;
        }
    }
    solution.push_back(-1);
    return solution; 
        
        
        
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends