//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int nums[], int n)
    {
        //code here.
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low=1,high=n-2;
        while(low<=high)
        {
         int mid=(low+high)/2;
         if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) 
         {
            return nums[mid];
         }
         //left
         if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1]))   
         {
            low=mid+1;
         } 
         //right
         else
         {
            high=mid-1;
         }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends