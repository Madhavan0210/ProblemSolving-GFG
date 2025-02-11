//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]!='0' && s[i]!='1') return false;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    string s;
    int t;
    scanf("%d\n", &t);
    while (t--) {
        cin >> s;
        Solution ob;
        if (ob.isBinary(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends