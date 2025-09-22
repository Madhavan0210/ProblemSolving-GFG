class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        string result = "";
        string word = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] != '.') {
                word += s[i];                 // build current word
            } else {
                if (!word.empty()) {          // only append if word exists
                    if (result.empty())
                        result = word;
                    else
                        result = word + "." + result;
                    word.clear();
                }
            }
        }
         if (!word.empty()) {
            if (result.empty())
                result = word;
            else
                result = word + "." + result;
        }
        return result;
    }
};