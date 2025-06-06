class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int prefixsum=0;
        int left=0;
        for(int i=0;i<arr.size();i++) prefixsum+=arr[i];
        for(int i=0;i<arr.size();i++)
        {
            left+=arr[i];
            prefixsum-=arr[i];
            if(prefixsum==left) return true;
        }
        return false;
    }
};
