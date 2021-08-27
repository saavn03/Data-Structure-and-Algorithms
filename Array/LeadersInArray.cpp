// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
        // Code here
        // vector<int> leader;
        // int curr_leader = a[n-1];
        // leader.push_back(curr_leader);
        // for(int i=n-2;i>=0;i--){
        //     if(curr_leader<a[i]){
        //         curr_leader = a[i];
        //         leader.push_back(curr_leader);
        //     }
        // }
        // return leader;
        
         int j=n-1;
        vector <int> v;
        for (int i=n-1;i>=0;i--){
        if(i==n-1){
            v.push_back(a[i]);
            continue;
        }
        if(a[i]>=a[j]){
            v.push_back(a[i]);
            j=i;
        }
        
        }
        // for (int i=v.size()-1;i>=0;i--){
        //  return v[i];
        // }
      
        reverse(v.begin(),v.end());
        return v;
    //     int b=0;
    //     for (int i=v.size()-1;i>=0;i--){
    //             int temp = v[i];
    //              v[b]=temp;
    //              b++;
    //       } 
    // return v;
        
 
    
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends