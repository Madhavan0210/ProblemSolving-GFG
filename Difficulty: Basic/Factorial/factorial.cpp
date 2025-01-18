//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int factorial(int N) {
        // code here
          long long tot=1;
        while(N>0)
        {
            tot*=N;
            N--;
        }
        return tot;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.factorial(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends