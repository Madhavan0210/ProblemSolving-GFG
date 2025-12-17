// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        set<int>st;
        string ans;
        for(char s:str2) st.insert(s);
        for(int i=0;i<str1.length();i++)
        {
            if(st.find(str1[i])==st.end()) ans+=str1[i];
        }
        return ans;
    }
};
