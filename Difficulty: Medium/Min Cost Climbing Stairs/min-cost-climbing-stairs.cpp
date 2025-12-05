//Back-end complete function Template for C++

class Solution {
  public:
    int dp[100100];
    int rec(int level,vector<int>&cost)
    {
        //purning
        if(level>=cost.size()) return 0;
        //dp
        if(dp[level]!=-1) return dp[level];
        //choice
          int ans = cost[level] + min(rec(level+1, cost), rec(level+2, cost));
          dp[level] = ans;
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        memset(dp,-1,sizeof(dp));
        return min(rec(0,cost),rec(1,cost));
    }
};