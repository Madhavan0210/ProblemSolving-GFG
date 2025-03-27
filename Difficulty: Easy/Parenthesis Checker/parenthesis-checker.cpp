//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> a;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{'|| s[i]=='[') a.push(s[i]);
            else
            {
                if(a.empty()) return false;
                char ch=a.top();
                a.pop();
                if((s[i]==')'&& ch=='(')|| (s[i]=='}'&&ch=='{')|| (s[i]==']'&&ch=='[')) 
           {     
            continue;
           }
                else return false;
            }
        }
        return a.empty();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends