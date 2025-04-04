//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool safe(int board[N][N],int row,int col,int c)
{
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==c) return false;
        if(board[i][col]==c) return false;
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
    }
    return true;
}
     bool solve(int board[N][N])
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]==0)
                {
                    for(int ch=1;ch<=9;ch++)
                    {
                        if(safe(board,i,j,ch))
                        {
                        board[i][j]=ch;
                        if(solve(board)==true) return true;
                        else board[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
       return solve(grid);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
         for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<grid[i][j]<<" ";
        }
    }
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	
cout << "~" << "\n";
}
	
	return 0;
}
// } Driver Code Ends