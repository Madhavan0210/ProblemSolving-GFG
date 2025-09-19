class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        long long sum=1;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                 if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
            }
        }
        return n==sum;
    }
};