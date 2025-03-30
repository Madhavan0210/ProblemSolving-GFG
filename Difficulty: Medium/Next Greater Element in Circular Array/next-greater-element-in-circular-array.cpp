//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> nge(n,0);
    stack<int>st;
    for(int i=(2LL*n-1);i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i%n])
        {
            st.pop();
        }
        if(i<n)
        {
            if(st.empty()) nge[i]=-1;
            else nge[i]=st.top();
        }
        st.push(arr[i%n]);
    }
    return nge;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        vector<int> v = ob.nextLargerElement(arr);
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends