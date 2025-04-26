//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // k is the maximum number of zeros allowed to flip
    int maxOnes(vector<int>& nums, int k) {
        // code here
        int l=0,r=0,maxlen=0;
       int zeros=0;
       while(r<nums.size())
       {
        if(nums[r]==0) zeros++;
        if(zeros>k)
        {
            if(nums[l]==0) zeros--;
            l++;
        }
        if(zeros<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
       } 
       return maxlen;
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int m;
        cin >> m;
        cin.ignore();

        Solution obj;
        int ans = obj.maxOnes(arr, m);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends