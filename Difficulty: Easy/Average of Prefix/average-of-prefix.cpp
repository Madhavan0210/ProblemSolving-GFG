// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int n=arr.size();
         vector<int>ans;
	    int sum=0;

	    for(int i=0;i<n;i++)
	    {
	        	    int value=0;
	     sum+=arr[i];
	     value=sum/(i+1);
	     ans.push_back(value);
	    }
	    return ans;
    }
};