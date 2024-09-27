//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
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
    int splitArray(int nums[] ,int n, int k) {
        // code here
        if(k>n) return -1;
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
   if(cnt>k) low=mid+1;
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
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends