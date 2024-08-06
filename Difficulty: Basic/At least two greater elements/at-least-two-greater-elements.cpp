//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        vector<int> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        vector<int> res = ob.findElements(arr);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        // cout<<"~"<<endl;
    }
}
// } Driver Code Ends