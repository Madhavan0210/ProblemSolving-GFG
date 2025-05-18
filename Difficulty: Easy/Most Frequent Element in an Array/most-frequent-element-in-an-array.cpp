//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(auto it:arr) mpp[it]++;
        int maxi=INT_MIN;
        int val=0;
        for(auto it:mpp)
        {
            if(it.second>val) 
            {
                val=it.second;
                maxi=it.first;
            }
            else if(it.second==val) maxi=max(maxi,it.first);
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string line;
        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ele = ob.mostFreqEle(arr);
        cout << ele << endl;
    }
}
// } Driver Code Ends