class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int start=0;
        int maxlen=0;
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;
            //left
            while(l>=0 && r<s.length() && s[l]==s[r])
            {
                if(r-l+1>maxlen)
                {
                 start=l;
                 maxlen=r-l+1;
                }
                l--;
                r++;
            }
            l=i,r=i+1;
             while(l>=0 && r<s.length() && s[l]==s[r])
            {
                if(r-l+1>maxlen)
                {
                 start=l;
                 maxlen=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,maxlen);
    }
};