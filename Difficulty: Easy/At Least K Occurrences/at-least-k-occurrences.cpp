class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
            if(mpp[arr[i]]==k) return arr[i];
        }
        return -1;
    }
};