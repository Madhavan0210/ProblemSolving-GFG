class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total=0;
        int sum=0;
        for(int i=0;i<arr.size();i++) total+=arr[i];
        for(int i=0;i<arr.size();i++)
        {
             if(sum==total- arr[i]) return i;
          sum+=arr[i];
          total-=arr[i];
        }
        return -1;
    }
};