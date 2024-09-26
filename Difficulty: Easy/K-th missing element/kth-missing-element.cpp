//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int KthMissingElement(vector<int> &arr, int &k) 
    {
        int res=-1;
        unordered_map<int,int>mp;
        vector<int>nums;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        int num=1;
        for(int i=arr[0];i<=arr[arr.size()-1];i++)
        {
            if(mp.find(i)!=mp.end())
            {
                
            }
            else
            {
             nums.push_back(i);   
            }
            num++;
        }
        if(nums.size()==0) return -1;
        else
        {
            if(nums.size()>=k)
            {
            res=nums[k-1];
            return res;
            }
            else return -1;
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.KthMissingElement(arr, k);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends