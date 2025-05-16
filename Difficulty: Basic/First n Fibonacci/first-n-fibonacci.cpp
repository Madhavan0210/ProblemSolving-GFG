//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    int findFibonacci(int n) {
  
   if (n == 0) {
      return 0;
   } else if (n == 1) {
      return 1;
   } else {
      return findFibonacci(n - 2) + findFibonacci(n - 1);
   }
}
    vector<int> fibonacciNumbers(int n) {
        // code here
         vector<int> ans;
   for (int i = 0; i < n; i++) {
      ans.push_back(findFibonacci(i));
   }
   return ans;

        
    }
};


//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<int> ans = obj.fibonacciNumbers(n);

        // printing the elements of vector
        for (int i : ans)
            cout << i << ' ';
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends