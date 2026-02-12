

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n=arr.size()-1;
        vector<int>ans;
        int maxi=-1;
        for(int i=n;i>=0;i--)
        {
            if(arr[i]>=maxi) ans.push_back(arr[i]);
            maxi=max(maxi,arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;;
    }
};