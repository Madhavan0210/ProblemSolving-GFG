//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int sumOfDigits(int N) {
        // code here
        int cnt=0;
     while(N>0)
     {
      int temp=N%10;
      cnt+=temp;
      N=N/10;
     }
     return cnt;
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
        cout << ob.sumOfDigits(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends