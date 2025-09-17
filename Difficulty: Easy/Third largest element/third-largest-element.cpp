class Solution {
  public:
    int thirdLargest(vector<int> &nums) {
        // Your code here
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return n-3<0?-1:nums[n-3];
    }
};