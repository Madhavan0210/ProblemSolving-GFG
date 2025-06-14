class Solution {
  public:
    int findPeakElement(vector<int>& a) {
        // Code here.
        sort(a.begin(),a.end());
        int largest=0;
        for(int i=0;i<a.size();i++) largest=max(largest,a[i]);
        return largest;
    }
};
