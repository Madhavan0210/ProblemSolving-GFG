class Solution {
  public:
    string findLargest(vector<int> &nums) {
        // code here
        vector<string>temp;
        for(auto c:nums) temp.push_back(to_string(c));

        sort(temp.begin(), temp.end(), [](string& a, string& b) {
            return a + b > b + a;
        });  
          string ans;
          for(auto& s:temp)
          {
            ans+=s;
          }
          return ans[0]=='0'?"0":ans;
    }
};