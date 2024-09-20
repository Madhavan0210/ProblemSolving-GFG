//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool possible(vector<int>&bloomDay,int mid,int m,int k)
 {
    int cut=0,total=0,n=bloomDay.size();
    for(int j=0;j<n;j++)
    {
        if(bloomDay[j]<=mid) cut++;
        else{
            total+=(cut/k);
            cut=0;
        }
    }
    total+=(cut/k);
    return total>=m;
 }
    int solve(int m, int k, vector<int> &bloomDay){
      // Code here
       long long val=m*1LL*k*1LL;
       int Mini=INT_MAX,Maxi=INT_MIN;
       int n=bloomDay.size();
       if(n<val) return -1;
       for(int i=0;i<n;i++)
       {
        Mini=min(Mini,bloomDay[i]);
        Maxi=max(Maxi,bloomDay[i]);
       }
       int low=Mini,high=Maxi;
        while(low<=high)
  {
    int mid=(low+high)/2;
    if(possible(bloomDay,mid,m,k)==true)
    {
       int ans=mid;
      high=mid-1;
    }
    else low=mid+1;
  }
  return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends