//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
     int firstoccur(int nums[],int target,int n)
     {
      int low=0,high=n-1;
      int first=n;
      while(low<=high)
      {
        int mid=(low+high)/2;
        if(nums[mid]>=target) 
        {
          first=mid;
          high=mid-1;  
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
      }  
      return first;
     }
     //lastoocurence
      int lastoccur(int nums[],int target,int n)
     {
      int low=0,high=n-1;
      int last=n;
      while(low<=high)
      {
        int mid=(low+high)/2;
        if(nums[mid]>target) 
        {
          last=mid;
          high=mid-1;  
        }
        else low=mid+1;
      }  
      return last;
     }
    vector<int> find(int nums[], int n , int target )
    {
        // code here
          int first=firstoccur(nums,target,n);
        if(first==n || nums[first]!=target) return {-1,-1};
        int last=lastoccur(nums,target,n);
        return {first,last-1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends