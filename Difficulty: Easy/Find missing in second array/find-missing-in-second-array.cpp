class Solution {

  public:
    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        // Your code goes here
         set<int>st;
         vector<int>ans;
         for(int i=0;i<b.size();i++) st.insert(b[i]);
         for(auto num:a)
         {
             if(st.find(num)==st.end()) ans.push_back(num);
         }
         return ans;
    }
};
