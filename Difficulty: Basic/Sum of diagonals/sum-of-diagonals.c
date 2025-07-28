int sumDiagonal(int N, int M[][N]) {
    // your code here
    int ans=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j) ans+=M[i][j];
        }
    }
    return ans;
}