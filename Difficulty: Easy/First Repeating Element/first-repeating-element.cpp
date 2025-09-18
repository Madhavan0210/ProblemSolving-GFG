class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int minIndex=INT_MAX;
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            if(mpp.find(arr[i])!=mpp.end()) minIndex=min(minIndex,mpp[arr[i]]);
            mpp[arr[i]]=i+1;
        }
        return minIndex==INT_MAX?-1:minIndex;
    }
};