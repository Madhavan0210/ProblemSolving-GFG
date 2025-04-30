//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int characterReplacement(string& s, int k) {
        // code here
        int l=0,r=0,maxlen=0;
        int maxfreq=0;
        int hash[26]={0};
        while(r<s.length())
        {
          hash[s[r]-'A']++;
          maxfreq=max(maxfreq,hash[s[r]-'A']);
          if((r-l+1)-maxfreq>k)
          {
            hash[s[l]-'A']--;
            l=l+1;
          }
          maxlen=max(r-l+1,maxlen);
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
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends