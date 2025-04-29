//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string s) {
        // Code here
         int cnt=0;
    int hash[3]={-1,-1,-1};
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']=i;
        cnt=cnt+(1+min(hash[0],min(hash[1],hash[2])));
    }
    return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends