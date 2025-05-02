//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s, string &t) {
        // Your code here
         int l=0,r=0;
    int minlen=INT_MAX;
    int sind=-1;
    int cnt=0;
    if(t.size()>s.size()) return "";
    vector<int> hash(256 , 0);
    for(int i=0;i<t.size();i++) hash[t[i]]++;
    while(r<s.length())
    {
        if(hash[s[r]]>0){
            cnt=cnt+1;
        }
        hash[s[r]]--;
        while(cnt==t.size())
        {
            if(r-l+1<minlen)
            {
                minlen=r-l+1;
                sind=l;
            }
            hash[s[l]]++;
            if(hash[s[l]]>0) cnt--;
            l++;
        }
        r++;
    }
    return sind == -1 ? "" : s.substr(sind , minlen);

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        Solution obj;
        string str = obj.smallestWindow(s1, s2);
        if (str.size() == 0) {
            cout << "\"\"" << endl;
        } else {
            cout << str << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends