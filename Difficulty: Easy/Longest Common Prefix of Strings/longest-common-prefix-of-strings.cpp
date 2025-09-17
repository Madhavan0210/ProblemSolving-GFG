// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> str) {
        // your code here
        string prefix=str[0];
        for(int i=1;i<str.size();i++)
        {
            int j=0;
            while(j<min(prefix.size(),str[i].length()))
            {
                if(prefix[j]!=str[i][j]) break;
                j++;
            }
            prefix=prefix.substr(0,j);
        }
        return prefix;
    }
};