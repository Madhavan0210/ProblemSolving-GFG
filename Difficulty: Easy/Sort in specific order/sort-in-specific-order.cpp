//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortIt(vector<long long>& arr) {
        // code here.
        int n=arr.size();
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
    cin.ignore();
    while (t--) {
        vector<long long> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.sortIt(arr);

        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends