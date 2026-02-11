class Solution {
  public:
    int maxi=INT_MIN;
    int mini=INT_MAX;
    void helper(vector<int>&arr,int i)
    {
        if(i==arr.size()) return;
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
        helper(arr,i+1);
    }
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        helper(arr,0);
        return {mini,maxi};
    }
};