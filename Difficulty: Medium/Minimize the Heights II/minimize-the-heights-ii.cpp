class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans = arr[n - 1] - arr[0];

        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        for(int i=0;i<arr.size();i++)
        {
            int mini=min(smallest,arr[i+1]-k);
            int maxi=max(arr[i]+k,largest);
            if(mini<0) continue;
            ans=min(ans,maxi-mini);
        }
        return ans;
    }
};