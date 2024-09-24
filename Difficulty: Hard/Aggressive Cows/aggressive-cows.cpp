//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

bool func(vector<int> &arr,int mid,int k)
{
   int cnt=1,last=arr[0];
   for(int i=1;i<arr.size();i++)
   {
    if(arr[i]-last>=mid) 
    {
        cnt++;
        last=arr[i];
    }
    if(cnt>=k) return true;
   } 
   return false;
}
    int solve(int n, int k, vector<int> &arr) {
    
        // Write your code here
        sort(arr.begin(),arr.end());
        int ans=-1;
         int low=0,high=(arr.back()-arr[0]);
    while(low<=high)
    {
       int mid=low+(high-low)/2;
      if(func(arr,mid,k)==true) 
      {
        ans=mid;
        low=mid+1;
      }
      else high=mid-1; 
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends