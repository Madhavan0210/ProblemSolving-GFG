class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int l=0,r=0;
        int maxi=INT_MIN;
        int sum=0;
        while(r<arr.size())
        {
             sum+=arr[r];
            if(r-l+1==k)
            {
                maxi=max(maxi,sum);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return maxi;
    }
};