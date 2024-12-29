//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void printsub(int ind,vector<int>&arr,vector<int>&vec,vector<vector<int>>&ans,int n)
{
    if(ind==n)
    {
        return;
    }
    vec.push_back(arr[ind]);
     ans.push_back(vec);
    printsub(ind+1,arr,vec,ans,n);
    vec.pop_back();
    printsub(ind+1,arr,vec,ans,n);
    
}
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
          vector<vector<int>>ans;
        vector<int>vec;
        ans.push_back(vec);
        int n=arr.size();
        printsub(0,arr,vec,ans,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the number of test cases
    while (t--) {
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<vector<int>> res = ob.subsets(arr);

        // Print result
        for (const auto& subset : res) {
            if (subset.size() == 0) {
                cout << "[]";
            } else
                for (int num : subset) {
                    cout << num << " ";
                }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends