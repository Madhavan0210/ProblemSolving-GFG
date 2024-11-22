//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int>pos,neg;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        for(int i=0;i<pos.size();i++) {
            arr[i]=pos[i];
        }
        int j=0;
        for(int i=pos.size();i<n;i++) {
            arr[i]=neg[j++];
        }
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
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends