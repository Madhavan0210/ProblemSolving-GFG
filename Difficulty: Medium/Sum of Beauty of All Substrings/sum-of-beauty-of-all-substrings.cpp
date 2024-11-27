//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  //maximum
int freqmax(int freq[])
{
    int count=INT_MIN;
    for(int i=0;i<26;i++)
    {
        count=max(freq[i],count);
    }
   return count;
}
//minimum
int freqmin(int freq[])
{
    int count=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        count=min(freq[i],count);
    }
   return count;
}
    int beautySum(string s) {
        // Your code goes here
         int n=s.size();
        int sum=0;
         for(int i=0;i<n;i++)
    {
        int freq[26]={0};
        for(int j=i;j<n;j++)
        {
          freq[s[j]-'a']++;
          int beauty=freqmax(freq)-freqmin(freq);
          sum+=beauty;
        }
    }
    return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends