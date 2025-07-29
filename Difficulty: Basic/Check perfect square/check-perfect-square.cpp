// User function Template for C++
class Solution {
  public:
    long long int isPerfectSquare(long long int num) {
        // code here
          int i=1;
        while(num>0){
            num -= i;      //Subtracting odd number from num and updating num
            i +=2;         // Updating i to the next odd number
            if(!num) return 1;
        }
        return 0;
    }
};