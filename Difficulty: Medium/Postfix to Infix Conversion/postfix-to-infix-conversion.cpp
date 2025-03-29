//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  stack<string>st;
    string postToInfix(string s) {
        // Write your code here
         int n=s.size();
    int i=0;
    while(i<n)
    {
        if((s[i]>='A' && s[i]<='z')|| (s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')) 
        {
           string temp=string(1,s[i]);
            st.push(temp);
        }
        else
        {
          string t1=st.top();
          st.pop();
          string t2=st.top();
          st.pop();
          string con='('+t2+string(1,s[i])+t1+')';
          st.push(con);
        }
        i++;
    }
    return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends