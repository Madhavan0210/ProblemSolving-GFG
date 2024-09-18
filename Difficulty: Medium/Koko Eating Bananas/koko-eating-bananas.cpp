//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int maximum(vector<int>&piles)
    {
       int value=INT_MIN;
       for(int i=0;i<piles.size();i++)
       {
        value=max(value,piles[i]);
       }
       return value;
    }
    int calculate(vector<int>&piles,int mid)
    {
     int hours=0;
      int n=piles.size();
     for(int i=0;i<n;i++)
     {
       hours+=ceil((double)piles[i]/(double)mid); 
     }
     return hours;
    }
    
    int KoKoEat(vector<int>& arr, int h) {
        // Code here
        int low=1,high=maximum(arr);
        while(low<=high)
        {
           int mid=(low+high)/2;
           int total=calculate(arr,mid);
           if(total<=h)
           {
            high=mid-1;
           }
           else low=mid+1;
        }
        return low;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.KoKoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends