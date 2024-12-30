//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void subsetsum(int ind,int sum,vector<int>&arr,vector<int>&ans)
  {
      if(ind==arr.size())
      {
          ans.push_back(sum);
          return;
      }
      subsetsum(ind+1,sum+arr[ind],arr,ans);
      subsetsum(ind+1,sum,arr,ans);
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        subsetsum(0,0,arr,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input

    while (t--) {
        vector<int> inputArray;
        string inputLine;

        // Input format: first number n followed by the array elements
        getline(cin, inputLine);
        stringstream inputStream(inputLine);
        int num;
        while (inputStream >> num) {
            inputArray.push_back(num); // Read the array elements from input string
        }

        Solution solutionObject;
        vector<int> result = solutionObject.subsetSums(inputArray);
        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout
            << endl
            << "~\n"; // Print results in list format with new line after each test case
    }

    return 0;
}

// } Driver Code Ends