//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
bool func(vector<int> &arr,int mid,int k)
{
   int cnt=1,last=arr[0];
   for(int i=1;i<arr.size();i++)
   {
    if(arr[i]-last>=mid) 
    {
        cnt++;
        last=arr[i];
    }
    if(cnt>=k) return true;
   } 
   return false;
}
    int aggresiveCows(vector<int> &arr, int k) {

        // Write your code here
         sort(arr.begin(),arr.end());
        int ans=-1;
         int low=0,high=(arr.back()-arr[0]);
    while(low<=high)
    {
       int mid=low+(high-low)/2;
      if(func(arr,mid,k)==true) 
      {
        ans=mid;
        low=mid+1;
      }
      else high=mid-1; 
    }
     return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggresiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends