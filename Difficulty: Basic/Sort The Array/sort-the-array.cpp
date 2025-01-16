//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortArr(vector<int> &arr) {
        // code here
               sort(arr.begin(),arr.end());

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
        ob.sortArr(nums);
        for (auto i : nums)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends