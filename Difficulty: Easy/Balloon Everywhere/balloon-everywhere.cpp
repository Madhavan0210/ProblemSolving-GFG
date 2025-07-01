// User function Template for C++

class Solution {
  public:
    int maxInstance(string text) {
         unordered_map<char, int> mpp;
         //hashmap
        for (char i : text) mpp[i] += 1;
        //find the min in hash
        return min({mpp['b'],mpp['a'], mpp['l']/2, mpp['o']/2, mpp['n']});
    }
};