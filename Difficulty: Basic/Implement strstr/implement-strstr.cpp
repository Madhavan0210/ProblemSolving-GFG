//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int n = s.size();
    int m = x.size();

    // Loop through the main string
    for (int i = 0; i <= n - m; ++i) {
        int j;
        // Check if substring starting from i matches x
        for (j = 0; j < m; ++j) {
            if (s[i + j] != x[j]) {
                break;
            }
        }
        // If we matched all characters of x
        if (j == m) {
            return i; // Found at index i
        }
    }
    return -1; // N
}