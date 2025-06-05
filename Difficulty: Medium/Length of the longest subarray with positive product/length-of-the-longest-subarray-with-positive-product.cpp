// User function Template for C++

class Solution {
  public:
    // Function to return the length of the
    // longest subarray with ppositive product
    int maxLength(vector<int> &nums, int n) {
        // code here
        int pos=0,neg=0,suff=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0){pos=0,neg=0;}
            if(nums[i]>0)pos++;
            if(nums[i]<0)neg++;

            if(neg%2==0)ans=max(ans,pos+neg);
        }

        pos=0,neg=0;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==0){pos=0,neg=0;}
            if(nums[i]>0)pos++;
            if(nums[i]<0)neg++;

            if(neg%2==0)ans=max(ans,pos+neg);
        }
        return ans;

    }
};