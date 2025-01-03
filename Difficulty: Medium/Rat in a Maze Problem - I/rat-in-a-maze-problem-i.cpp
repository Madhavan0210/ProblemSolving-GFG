//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
 
  void solve(int i,int j,vector<vector<int>> &m,vector<string>&ans,vector<vector<int>>&v,string move,int n)
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(move);
        return;
    }
    //down
    if(i+1<n && !v[i+1][j] && m[i][j]==1)
    {
        v[i][j]=1;
        solve(i+1,j,m,ans,v,move+'D',n);
        v[i][j]=0;
    }
    //left
     if(j-1>=0 && !v[i][j-1] && m[i][j]==1)
    {
        v[i][j]=1;
        solve(i,j-1,m,ans,v,move+'L',n);
        v[i][j]=0;
    }
    //right
    if(j+1<n && !v[i][j+1] && m[i][j]==1)
    {
        v[i][j]=1;
        solve(i,j+1,m,ans,v,move+'R',n);
        v[i][j]=0;
    }
    //up
    if(i-1>=0 && !v[i-1][j] && m[i][j]==1)
    {
        v[i][j]=1;
        solve(i-1,j,m,ans,v,move+'U',n);
        v[i][j]=0;
    }
}
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
         vector<string>ans;
         int n=mat.size();
    vector<vector<int>>hashh(n,vector<int>(n,0));
    if(mat[0][0]) solve(0,0,mat,ans,hashh,"",n);
    return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends