//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &S1, string &S2) {

        // Your code here
        char map_s[128]={0};
    char map_t[128]={0};
    for(int i=0;i<S1.size();i++)
    {
        if(map_s[S1[i]]!=map_t[S2[i]]) return false;
        map_s[S1[i]]=i+1;
        map_t[S2[i]]=i+1;
    }
    return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends