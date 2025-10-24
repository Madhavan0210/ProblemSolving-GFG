// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &nums) {
        // Complete the function
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                nums[i-1]*=2;
                nums[i]=0;
            }
        }
         int j=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            { 
                j=i;
                break;
            }
        }
        if(j==-1) return nums;
        for(int i=j+1;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
               swap(nums[i],nums[j]);
               j++; 
            }
        }
        return nums;
    }
};
