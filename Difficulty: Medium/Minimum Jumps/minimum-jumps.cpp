//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& nums) {
        // code here
        int n = nums.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            if(i>maxlen) return -1;
            maxlen=max(maxlen,i+nums[i]);
        }
        int jumps=0,l=0,r=0;
    while(r<nums.size()-1)
    {
        int farthest=0;
        for(int ind=l;ind<=r;ind++)
        {
            farthest=max(ind+nums[ind],farthest);
        }
        l=r+1;
        r=farthest;
        jumps++;
    }
    return jumps;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends