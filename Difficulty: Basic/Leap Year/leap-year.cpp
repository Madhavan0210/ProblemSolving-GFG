class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if (n % 400 == 0) return 1;
    else if (n % 100 == 0) return 0;
    else if (n % 4 == 0) return 1;
    return 0;
    }
};