

class Solution {
  public:
    int maxsum_SIS(int nums[], int n) {
        // Your code goes here
        int sum=nums[0];
        int ans=sum;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]<nums[i])
            {
                sum+=nums[i];
                ans=max(ans,sum);
            }
            else 
            {
                sum=0;
                sum+=nums[i];
            }
        }
        return ans;
    }
};