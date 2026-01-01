
class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Complete the function
        int ans=INT_MAX;
        for(auto x:arr)
        {if (abs(x-k) < abs(ans-k) || (abs(x-k) == abs(ans-k) && x > ans)) {
                ans = x;
        }
            
        }
        return ans;
    }
};