

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& nums, int n,
                                            long long k) {
                                                
                                                if(k<=0) return 0;
        int l=0,r=0;
        long product=1;
        long long ans=0;
        while(r<nums.size())
        {
            product*=nums[r];
            while(product>=k && l<=r)
            {
                product=product/nums[l];
                l+=1;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
                                            }
};