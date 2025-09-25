class Solution {
  public:
    bool isSubSeq(string& s, string& t) {
        // code here
        int i=0,j=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j]) i++;
            j++;
        }
        return i==s.length();
    }
};