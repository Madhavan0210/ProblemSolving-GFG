//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int findMoves(int n, vector<int> seats, vector<int> students) {
         sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int cnt=0,i=0,j=0;
        while(i<seats.size())
        {
            int temp=abs(seats[i]-students[j]);
            cnt+=temp;
            i++;
            j++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> chairs(n), passengers(n);
        for (auto &val : chairs) cin >> val;
        for (auto &val : passengers) cin >> val;
        int ans = sol.findMoves(n, chairs, passengers);
        cout << ans << '\n';
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends