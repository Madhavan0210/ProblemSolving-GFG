//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution {
  public:
    string isPowerof3(int n) {
        // code here
        if(n<=0) return "No";
        while(n%3==0)
        {
            n/=3;
        }
        if(n==1) return "Yes";
        else return "No";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPowerof3(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends