class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int l=0,r=0;
        vector<int>ans;
        int maxi=INT_MIN;
        while(r<arr.size())
        {
            maxi=max(maxi,arr[r]);
            if(r-l+1==k)
            {
                ans.push_back(maxi);
                if (arr[l] == maxi) {
                maxi = INT_MIN;
                for (int i = l + 1; i <= r; i++) {
                    maxi = max(maxi, arr[i]);
                }
            }
                l=l+1;
            }
            r++;
        }
        return ans;
    }
};