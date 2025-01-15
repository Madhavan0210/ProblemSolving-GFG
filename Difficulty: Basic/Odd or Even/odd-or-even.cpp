//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isEven(int N) {
        // code here
         if(N%2==0)
          return 1;
        else
          return 0;
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
        if (ob.isEven(N))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends