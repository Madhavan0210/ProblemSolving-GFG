//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int K) {
        // code here
        map<char,int>mpp;
        int l=0,r=0;
        int cnt=0;
        while(r<s.length())
        {
            mpp[s[r]]++;
           if (r - l + 1 == K) {
            if (mpp.size() == K-1) cnt++;
            mpp[s[l]]--;
            if (mpp[s[l]] == 0) mpp.erase(s[l]);
            l++;
        }
        r++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends