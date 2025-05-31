class Solution {
  public:
    string reverse(string str) {
        // code here.
        int l=0,r=str.length()-1;
        while(l<r)
        {
           if (!((str[l] >= 'A' && str[l] <= 'Z') || (str[l] >= 'a' && str[l] <= 'z'))) {
        l++;
    } else if (!((str[r] >= 'A' && str[r] <= 'Z') || (str[r] >= 'a' && str[r] <= 'z'))) {
        r--;
    } else {
        swap(str[l], str[r]);
        l++;
        r--;
    }
        }
        return str;
    }
};