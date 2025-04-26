//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        // code
        int n=s.length();
        int l=0,r=0,maxlen=0,len=0;
        unordered_map<char,int>mpp;
        while(r<n)
        {
            if(mpp.find(s[r])!=mpp.end())
            {
                if(mpp[s[r]]>=l) l=mpp[s[r]]+1;
            }
            len=r-l+1;
            maxlen=max(maxlen,len);
            mpp[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.longestUniqueSubstring(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends