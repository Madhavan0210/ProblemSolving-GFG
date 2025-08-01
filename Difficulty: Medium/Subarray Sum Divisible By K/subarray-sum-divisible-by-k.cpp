class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& nums, int k) {
        // Your code goes here
        map<int,int>hash;
        hash[0]=1;
        int prefixsum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
           prefixsum=(prefixsum+nums[i])%k;
           if(prefixsum<0) prefixsum+=k;
           if(hash.find(prefixsum)!=hash.end())
           {
             ans+=hash[prefixsum];
           }
           hash[prefixsum]++;
        }
        return ans;
    }
};
