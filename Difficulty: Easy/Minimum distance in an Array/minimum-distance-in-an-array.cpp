class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int mini=INT_MAX;
        int a=-1,b=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
               a=i;
               if(b!=-1) mini=min(mini,abs(a-b));
            }
             if(arr[i]==y)
            {
               b=i;
               if(a!=-1) mini=min(mini,abs(a-b));
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};