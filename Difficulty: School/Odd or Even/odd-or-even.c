//{ Driver Code Starts
// Initial Template for C
#include <stdio.h>


// } Driver Code Ends
// User function Template for C
const char* oddEven(int N) {
    // Write your code here
     if(N%2==0)
          return "even";
        else
          return "odd";
}

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N;
        scanf("%d", &N);
        printf("%s\n", oddEven(N));
    }
    return 0;
}

// } Driver Code Ends