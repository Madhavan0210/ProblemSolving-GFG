//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
     int Subarrcount(vector<int>&vec,int goal)
 {
    int l=0,r=0,cnt=0;
    int sum=0;
    while(r<vec.size())
    {
        if(goal<0) return 0;
        sum+=vec[r]%2;
        while(sum>goal)
        {
            sum-=vec[l]%2;
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
 }
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
        return Subarrcount(nums,k)-Subarrcount(nums,k-1); 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends