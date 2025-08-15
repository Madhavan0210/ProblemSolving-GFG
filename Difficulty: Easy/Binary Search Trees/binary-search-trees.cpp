// User function Template for C++

class Solution {
  public:
    bool isBSTTraversal(vector<int>& arr) {
        // your code here
        for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1])  // not strictly increasing
            return false;
    }
    return true;
        
    }
};