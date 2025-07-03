class Solution {
  public:
    int maxLen(vector<int> &nums) {
        // Your code here
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i]=-1;
        }
        map<int,int>mpp;
        mpp.insert({0,-1});
        int sum=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mpp.find(sum)!=mpp.end())
            {
                maxlen=max(maxlen,i-mpp[sum]);
            }
            else mpp[sum]=i;
        }
        return maxlen;
    }
};