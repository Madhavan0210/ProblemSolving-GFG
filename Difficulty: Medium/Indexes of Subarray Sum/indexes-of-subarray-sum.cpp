//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &vec, int k) {
        // code here
        int left=0,right=0;
        int n=vec.size();
    long long sum=vec[0];
    int maxlen=0;
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=vec[left];
            left++;
        }
        if(sum==k)
        {
          return {left+1,right+1};
        }
        right++;
        if(right<n) sum+=vec[right];
    }
    return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends