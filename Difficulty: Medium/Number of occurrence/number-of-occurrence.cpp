//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
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
	int count(int nums[], int n, int target) {
	    // code here
        int first=firstoccur(nums,target,n);
        if(first==n||nums[first]!=target)
        {
            return 0;
        }
        int last=lastoccur(nums,target,n);
        return last-first;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends