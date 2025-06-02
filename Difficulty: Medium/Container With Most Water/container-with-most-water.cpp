class Solution {

  public:
    int maxWater(vector<int> &height) {
        // code here
        int l = 0, r = height.size()-1;
        int maxi = 0;
        while (l<r) {
            maxi=max(maxi,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxi;
    }
};