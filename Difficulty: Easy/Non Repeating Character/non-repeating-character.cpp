
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        for(char ch:s)
        {
            if(mpp[ch]==1) return ch;
        }
        return '$';
    }
};