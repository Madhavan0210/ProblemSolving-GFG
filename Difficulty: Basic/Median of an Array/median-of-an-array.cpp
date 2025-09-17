class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2==0) return (float)(arr[n/2]+arr[n/2-1])/2;
        return arr[n/2];
    }
};