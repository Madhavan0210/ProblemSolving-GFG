//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
          vector<long long>odd;
        vector<long long>even;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        int a=even.size();
        int b=odd.size();
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.begin()+b);
        for(int i=0;i<n;i++)
        {
            if(i<b) 
            {
                arr[i]=odd[i];
            }
            else
            {
                arr[i]=even[i-b];
            
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends