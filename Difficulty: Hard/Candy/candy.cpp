//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCandy(vector<int> &vec) {
        // code here
         int sum=1,r=1;
    int n=vec.size();
    while(r<n)
    {
        if(vec[r]==vec[r-1]) 
        {
            sum++;
            r++;
            continue;
        }
        int peak=1;
        while(r<n && vec[r]>vec[r-1])
        {
            peak++;
           sum+=peak;
           r++;
        }
        int down=1;
        while(r<n && vec[r-1]>vec[r])
        {
            sum+=down;
            down++;
            r++;
        }
        if(peak<down) sum+=(down-peak);
    }
    return sum;
    }
};



//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr = inputLine();

        Solution obj;
        cout << obj.minCandy(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends