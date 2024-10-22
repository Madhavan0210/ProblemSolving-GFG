//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string num) {
        // your code here
        int n=num.length()-1;
        string ans;
        for(int i=n;i>=0;i--)
        {
           if((int)num[i]%2!=0)
           {
            ans=num.substr(0,i+1);
            return ans;
           } 
        }
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends