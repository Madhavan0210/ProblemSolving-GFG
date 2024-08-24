//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        //floor
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=0,high=n-1,ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]<=x)
            {
                ans=arr[mid];
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        //ceil
         int low1=0,high1=n-1,ans1=-1;
         while (low1 <= high1) {
        int mid1 = (low1 + high1) / 2;
        if (arr[mid1] >= x) {
            ans1 = arr[mid1];
            high1 = mid1 - 1;
        }
        else {
            low1 = mid1 + 1; 
        }
    }
    return {ans,ans1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends