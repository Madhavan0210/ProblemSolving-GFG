//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
  int lowerbound(vector<int>arr,int m,int k)
  {
     int low=0,high=m-1,ans=m;
     while(low<=high)
     {
         int mid=(low+high)/2;
        if(arr[mid]>=k)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
     }
     return ans;
  }
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int cnt=0;
        int index=-1;
       int n=arr.size();
    int m=arr[0].size();
        for(int i=0;i<n;i++)
        {
            int countrow=m-lowerbound(arr[i],m,1);
            if(countrow>cnt)
            {
                cnt=countrow;
                index=i;
            }
        }
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends