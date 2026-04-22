class Solution {
  public:
    int leftElement(vector<int>& a) {
        // Your code goes here
        int val=0;
        int n=a.size();
        val=n/2;
sort(a.begin(), a.end());        if(n%2!=0)
        {
          return a[val];
        }
        else
        {
          return a[val-1];
        }
    }
};