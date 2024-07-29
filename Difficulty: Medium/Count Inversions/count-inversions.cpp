//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
   long long int merge(long long arr[], int low, int mid, int high) {
        int left = low, right = mid+1;
        vector<long long> temp;
        long long int cnt = 0;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            // if right part element smaller
            // pair can be formed
            // take left part's length as count of pairs = (mid-left+1)
            else {
                temp.push_back(arr[right]);
                cnt += (mid-left+1);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
        return cnt;
    }
    long long int mergeSort(long long arr[], int low, int high) {
        long long int cnt = 0;
        if (low >= high) return cnt;
        int mid = (low+high)/2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid+1, high);
        cnt += merge(arr, low, mid, high);
        return cnt;
    }
  public:
    long long int inversionCount(long long arr[], int n) {
        // divide the given array in left and right part while doing merge sort
        long long int ans = mergeSort(arr, 0, n-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends