class Solution {
  public:
    int countSquares(int n) {
        // code here
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(i*i>=n) break;
            cnt++;
        }
        return cnt;
    }
};