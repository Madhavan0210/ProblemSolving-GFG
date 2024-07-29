//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    string PartyType(long long int nums[], int n)
    {
        // Your code goes here
         /*unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
           if(it.second>1) return "BOYS";
        }
        return "GIRLS";
     */
     sort(nums,nums+n);
     for(int i=1;i<n;i++)
     {
        if(nums[i]==nums[i-1]) return "BOYS";
     }
     return "GIRLS";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long int a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        Solution ob;
        cout<< ob.PartyType(a, n) <<endl;
        
    }
    return 0;
}

// } Driver Code Ends