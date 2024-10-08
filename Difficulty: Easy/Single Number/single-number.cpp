//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int getSingle(int nums[], int n) {
	    // code here
	     map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
           mpp[nums[i]]++; 
        }
        for(auto it:mpp)
        {
            if(it.second%2!=0) return it.first;
        }
            return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends