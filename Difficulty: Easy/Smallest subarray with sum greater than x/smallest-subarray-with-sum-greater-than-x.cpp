class Solution {
  public:
    int smallestSubWithSum(int target, vector<int>& nums) {
        // Your code goes here
        int ans=INT_MAX;
        int l=0,r=0;
        int sum=0;
        while(r<nums.size())
        {
          sum+=nums[r];
          while(sum>target)
          {
            ans=min(ans,r-l+1);
            sum-=nums[l];
            l++;
          }
          r++;
        }
        return ans==INT_MAX?0:ans;
    }
};