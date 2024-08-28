//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t) {

        // Your code here
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2) return false;
         unordered_map <char,int> mpp;
        for(int i=0; s[i] !='\0';i++) 
        {
            mpp[s[i]]++;
        }
        for(int i=0;t[i] !='\0';i++)
        {
            if(mpp[t[i]]>0) mpp[t[i]]--;
            else
            {
            return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends