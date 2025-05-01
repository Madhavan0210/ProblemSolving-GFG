//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int countsubarry(vector<int>&vec,int k)
    {
        int l=0,r=0,cnt=0;
        map<int,int>mpp;
        while(r<vec.size())
        {
            mpp[vec[r]]++;
            while(mpp.size()>k)
            {
                mpp[vec[l]]--;
                if(mpp[vec[l]]==0) mpp.erase(vec[l]);
                l++;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
    int exactlyK(vector<int> &arr, int k) {
        // code here
        return countsubarry(arr,k)-countsubarry(arr,k-1);
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
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.exactlyK(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends