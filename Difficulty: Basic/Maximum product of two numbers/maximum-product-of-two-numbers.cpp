//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
         int max1,max2;
        
        max1 = INT_MIN;
        max2 = INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(max2<arr[i]){
                max1=max2;
                max2=arr[i];
            }
            else if(max1<arr[i])
                max1=arr[i];
        }
        
        return (max1*max2);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxProduct(arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends