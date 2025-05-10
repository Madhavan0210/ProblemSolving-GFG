//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    // Function to perform selection sort on the given array.
    int select(vector<int>arr, int i,int n)
    {
        // code here such that selectionSort() sorts arr[]
          int mmi=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mmi]) mmi=j;
        }
        return mmi;
    }
    void selectionSort(vector<int> &arr) {
        // code here/code here
        int n=arr.size();
         for(int i=0;i<=n-2;i++)
    {
      int minindex=select(arr,i,n);
      swap(arr[i],arr[minindex]);
    }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution obj;
        obj.selectionSort(a);

        Array::print(a);
        cout << "~" << endl;
    }
}

// } Driver Code Ends