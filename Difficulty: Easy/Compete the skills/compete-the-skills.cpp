class Solution {
  public:
    vector<int> scores(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int ca=0,cb=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]<b[i]) 
            {
                cb++;
            }
            else if(a[i]>b[i])
            {
              ca++;  
            }
        }
        return {ca,cb};

    }
};