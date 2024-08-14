//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool PalinArray(vector<int> &a) {
        // code here
        int ls=0,temp=0;
    	// code here
    	for(int i=0;i<a.size();i++)
    	{
    	    int rev=0;
    	  temp=a[i];
    	  while(temp>0)
    	  {
    	       ls=temp%10;
                rev=(rev*10)+ls;
                temp=temp/10;
    	  }
    	  if(rev!=a[i]) return 0;
    	}
    	return 1;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends