//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int nums[], int N, int k)
    {
        // code here
         unordered_map<int,int>mpp;
        mpp[0]=1;
        int prefixsum=0,cnt=0;
        for(int i=0;i<N;i++)
        {
         prefixsum+=nums[i];
         int remove=prefixsum-k;
         cnt+=mpp[remove];
         mpp[prefixsum]+=1;   
        }
        return cnt;
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
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends