//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int Subarrcount(vector<int>&vec,int goal)
 {
    int l=0,r=0,cnt=0;
    int sum=0;
    while(r<vec.size())
    {
        if(goal<0) return 0;
        sum+=vec[r];
        while(sum>goal)
        {
            sum-=vec[l];
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
 }
    int numberOfSubarrays(vector<int>& nums, int goal) {
        // Your code goes here.
        return Subarrcount(nums,goal)-Subarrcount(nums,goal-1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<int> arr;
        stringstream ss(input);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.numberOfSubarrays(arr, target) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends