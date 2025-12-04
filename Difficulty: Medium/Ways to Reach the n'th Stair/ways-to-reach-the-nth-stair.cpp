class Solution {
  public:
    int dp[100100];
    int rec(int level,int n)
     {
        //purning
        if(level>n) return 0;
        //base case
        if(level==n) return 1;
        //dp
        if(dp[level]!=-1) return dp[level];
        //choice
        int ans=0;
        for(int i=1;i<=2;i++)
        {
         //move   
         int ways=rec(level+i,n);
         ans+=ways;
        }
        dp[level]=ans;
        return ans; 
     }
    int countWays(int n) {
        // your code here
         memset(dp,-1,sizeof(dp));
        return rec(0,n);
    }
};
