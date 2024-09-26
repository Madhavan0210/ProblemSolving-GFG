//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
  int countstudents(int arr[],int mid,int n)
{
    int student=1;
    long long pagestudent=0;
    for(int i=0;i<n;i++)
    {
       if(pagestudent+arr[i]<=mid)
       {
        pagestudent+=arr[i];
       } 
       else{
        student+=1;
        pagestudent=arr[i];
       }
    }
    return student;
}
    // Function to find minimum number of pages.
    long long findPages(int n, int nums[], int m) {
        // code here
        if(m>n) return -1;
        int maxi=INT_MIN,sum=0;
  for(int i=0;i<n;i++)
  {
     maxi=max(nums[i],maxi);
     sum+=nums[i];
  }
  int low=maxi;
  int high=sum;
  while(low<=high)
  {
   int mid=(low+high)/2;
   int cnt=countstudents(nums,mid,n); 
   if(cnt>m) low=mid+1;
   else high=mid-1;
  }
  return (long long)low;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends