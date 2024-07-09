//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	    int ans[10]={0};
   	    for(int i=0;i<nums.size();i++)
   	    {
   	        int n=nums[i];
   	        while(n>0)
   	        {
   	            ans[n%10]++;
   	            n=n/10;
   	        }
   	    }
   	    vector<int>v;
   	    for(int i=0;i<10;i++)
   	    {
   	        if(ans[i]>=1)
   	        {
   	        v.push_back(i);
   	    }
   	    }
   	    sort(v.begin(),v.end());
   	    return v;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends