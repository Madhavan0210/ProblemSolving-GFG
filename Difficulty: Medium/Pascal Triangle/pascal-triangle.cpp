//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
// #define ll long long
class Solution{
public:
  
    vector<long long> generateRow(int row)
{
    long long ans = 1;
    vector<long long> ansRow;
    ansRow.push_back(1);
    for(int i=1;i<row;i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
  
    vector<long long> nthRowOfPascalTriangle(int n) 
    { 

        vector<long long> A(n, 0);

        A[0] = 1;

        long long m=pow(10,9)+7;

        for(long long i=1; i<n; i++)

            for(long long j=i; j>=1; j--)

                A[j] =(A[j]+A[j-1])%m;

        return A;
    }
};

//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends