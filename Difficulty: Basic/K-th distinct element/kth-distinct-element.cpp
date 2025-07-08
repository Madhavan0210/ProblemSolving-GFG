class Solution {
  public:
    int KthDistinct(vector<int> arr, int k) {
        // Code here.
        map<int,int>mpp;
        for(auto s:arr) mpp[s]++;
        for(int i=0;i<arr.size();i++)
        {
            if(mpp[arr[i]]==1 && k>=0) k--;
            if(k==0) return arr[i];
        }
        return -1;
    }
};