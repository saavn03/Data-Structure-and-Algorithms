#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    // int kadeance(int arr[],int n){
    //     int res=arr[0],maxEnding = arr[0];
    //     for(int i=1;i<n;i++){
    //         maxEnding = max(maxEnding+arr[i],arr[i]);
    //         res = max(maxEnding,res);
    //     }
    //     return res;
    // }
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        // int max = kadence(arr,n);
        // if(max<0){
        //     return max_normal;
        // }
        // int arr_sum = 0;
        // for(int i=0;i<n;i++){
        //     arr_sum += arr[i];
        //     //invert array
        //     arr[i] = -arr[i];
        // }
        // int max_circular_sum = arr_sum + kadeance(arr,n);
        // return max(max,mac_circular_sum);
       
    // Corner Case
    if (num == 1)
        return arr[0];
 
    // Initialize sum variable which store total sum of the array.
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += arr[i];
    }
 
    // Initialize every variable with first value of array.
    int curr_max = arr[0], max_so_far = arr[0], curr_min = arr[0], min_so_far = arr[0];
 
    // Concept of Kadane's Algorithm
    for (int i = 1; i < num; i++) {
        // Kadane's Algorithm to find Maximum subarray sum.
        curr_max = max(curr_max + arr[i], arr[i]);
        max_so_far = max(max_so_far, curr_max);
 
        // Kadane's Algorithm to find Minimum subarray sum.
        curr_min = min(curr_min + arr[i], arr[i]);
        min_so_far = min(min_so_far, curr_min);
    }
 
    if (min_so_far == sum)
        return max_so_far;
 
    // returning the maximum value
    return max(max_so_far, sum - min_so_far);
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends