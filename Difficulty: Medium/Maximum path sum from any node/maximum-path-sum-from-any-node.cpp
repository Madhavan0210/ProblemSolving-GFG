// User Fuction template for C++
/*
// Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return maximum path sum from any node in a tree.
    int helper(Node* root,int &cnt)
  {
    if(root==NULL) return 0;
    int l=max(0,helper(root->left,cnt));
    int r=max(0,helper(root->right,cnt));
    cnt=max(cnt,l+r+root->data);
    return max(l,r)+root->data;
  }
    int findMaxSum(Node *root) {
        // code here
         int cnt=INT_MIN;
    helper(root,cnt);
    return cnt;
    }
};