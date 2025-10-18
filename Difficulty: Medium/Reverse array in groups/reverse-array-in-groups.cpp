class Solution {
  public:
    void reverseArray(vector<int>&arr,int i,int k)
    {
        while(i<k)
        {
            int temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
            i++;
            k--;
        }
    }
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        for (int i = 0; i < n; i += k) {
            int right = min(i + k - 1, n - 1);
            reverseArray(arr, i, right);
        }
    }
};
