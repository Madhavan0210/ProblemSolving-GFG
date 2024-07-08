//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
         int el1=INT_MIN;
        int el2=INT_MIN;
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
           if(cnt1==0 && nums[i]!=el2)
           {
            cnt1=1,el1=nums[i];
           } 
           else if(cnt2==0 && nums[i]!=el1)
           {
            cnt2=1,el2=nums[i];
           }
           else if(el1==nums[i]) cnt1++;
           else if(el2==nums[i]) cnt2++;
           else {
            cnt1--;
            cnt2--;
           }
        }
           vector<int>ls;
           int cnt3=0,cnt4=0;
           for(int i=0;i<nums.size();i++)
           {
            if(el1==nums[i]) cnt3++;
            if(el2==nums[i]) cnt4++;
           }
           int min=(int)(nums.size()/3);
           if(cnt3>min) ls.push_back(el1);
           if(cnt4>min) ls.push_back(el2);
           if(ls.size()==0) ls.push_back(-1);
          return ls;
          
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends