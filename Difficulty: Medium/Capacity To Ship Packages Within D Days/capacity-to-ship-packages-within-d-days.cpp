//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int func(int weight[],int mid,int n)
{
  int noofdays=1,load=0;
  for(int i=0;i<n;i++)
  {
    if(weight[i]+load>mid)
    {
      noofdays++;
      load=weight[i];  
    }
    else load+=weight[i];
  }  
  return noofdays;
}
    int leastWeightCapacity(int weight[], int n, int days) {
        // code here
        int maxi=INT_MIN;
   int sum=0;
   for(int i=0;i<n;i++)
   {
     maxi=max(maxi,weight[i]);
     sum+=weight[i];
   } 
   int low=maxi,high=sum;
   while(low<=high)
   {
    int mid=(low+high)/2;
    int totaldays=func(weight,mid,n);
    if(totaldays<=days)
    {
        high=mid-1;
    }
    else low=mid+1;
   }
   return low;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    }
    return 0;
}
// } Driver Code Ends