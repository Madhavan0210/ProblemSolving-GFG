class Solution {
  public:
    int findElement(vector<int> &arr) {
        // code here
        vector<int>leftMax(arr.size()),rightMin(arr.size());
        leftMax[0]=arr[0];
        rightMin[arr.size()-1]=arr[arr.size()-1];
        for(int i=1;i<arr.size();i++) leftMax[i]=max(leftMax[i-1],arr[i]);
        for(int i=arr.size()-2;i>=0;i--) rightMin[i]=min(rightMin[i+1],arr[i]);
        for(int i=1;i<arr.size()-1;i++)
        {
            if(leftMax[i-1]<arr[i] && arr[i]<rightMin[i+1]) return arr[i];
        }
        return -1;
    }
};