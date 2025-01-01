//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void queen(int col,vector<string>&vec,vector<vector<int>>&ans,vector<int>temp,vector<int>&leftrow,vector<int>&upper,vector<int>&lower,int n)
        {
            if(col==n)
            {
                ans.push_back(temp);
                return;
            }
            for(int row=0;row<n;row++)
            {
                if(leftrow[row]==0 && upper[n-1+col-row]==0 && lower[row+col]==0)
                {
                    vec[row][col]='M';
                    temp.push_back(row+1);
                    leftrow[row]=1;
                    upper[n-1+(col-row)]=1;
                    lower[row+col]=1;
                    queen(col+1,vec,ans,temp,leftrow,upper,lower,n);
                    temp.pop_back();
                    vec[row][col]='.';
                    leftrow[row]=0;
                    upper[n-1+(col-row)]=0;
                    lower[row+col]=0;
                }
            }
        }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
    vector<string>vec(n);
    vector<int>temp;
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
    vec[i]=s;
    }
    vector<int> leftrow(n,0),upper(2*n-1,0),lower(2*n-1,0);
    queen(0,vec,ans,temp,leftrow,upper,lower,n);
    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends