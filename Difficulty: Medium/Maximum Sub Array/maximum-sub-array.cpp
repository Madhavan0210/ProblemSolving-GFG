// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int maxi=-1;
        vector<int>ans;
        int sum=0,start=0,end=0,startind;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]>=0) 
           {
               if(sum==0) start=i;
               sum+=arr[i];
               if(sum>=maxi)
              {
                  maxi=sum;
                  end=i;
                  startind=start;
              }
           }
           else sum=0;
        }
        if(maxi==-1) ans.push_back(-1);
        else
        {
            for(int i=startind;i<=end;i++) ans.push_back(arr[i]);
        }
        return ans;
    }
};