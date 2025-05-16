//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
     int sum(vector<int>&arr,int n)
    {
        if(n==arr.size()) return 0;
        return arr[n]+sum(arr,n+1);
    }
    int arraySum(vector<int>& arr) {
        // code here
        return sum(arr,0);
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.arraySum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends