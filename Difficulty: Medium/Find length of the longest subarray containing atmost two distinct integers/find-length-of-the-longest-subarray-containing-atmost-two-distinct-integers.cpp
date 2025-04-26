//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int totalElements(vector<int> &s) {
        // code here
        int l=0,r=0,maxlen=0,len=0;
    unordered_map<int,int>mpp;
    while(r<s.size())
    {
     mpp[s[r]]++;
     while(mpp.size()>2)
     {
        mpp[s[l]]--;
        if(mpp[s[l]]==0) mpp.erase(s[l]);
        l++;
     }
     if(mpp.size()<=2)
     {
        len=r-l+1;
        maxlen=max(len,maxlen);
     }
     r++;
    }
    return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends