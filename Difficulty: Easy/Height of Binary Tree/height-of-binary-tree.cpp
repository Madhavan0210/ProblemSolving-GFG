/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int helper(Node* root)
    {
         if(root==NULL) return 0;
        int l=helper(root->left);
        int r=helper(root->right);
        return 1+max(l,r);
    }
    int height(Node* root) {
        // code here
           return helper(root)-1;
    }
};