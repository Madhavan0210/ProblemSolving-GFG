//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& nums) {
        // complete the function here
        int low=0,high=nums.size()-1,ans=INT_MAX;
        while(low<=high)
        {
          int mid=(low+high)/2;
          if(nums[low]<=nums[high])
          {
            ans=min(ans,nums[low]);
            break;
          }  
          if(nums[low]<=nums[mid])
          {
           ans=min(ans,nums[low]);
           low=mid+1; 
          }
          else
          {
           ans=min(ans,nums[mid]);
           high=mid-1; 
          }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends