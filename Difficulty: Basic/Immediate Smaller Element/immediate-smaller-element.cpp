//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void immediateSmaller(vector<int>& arr) {
        //  code here
        for(int i=0;i<arr.size();i++)
        {
            if(i==arr.size()-1) arr[i]=-1;
            else
            {
            if(arr[i]>arr[i+1]) arr[i]=arr[i+1];
            else arr[i]=-1;
            }
        }
        
        
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
        obj.immediateSmaller(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends