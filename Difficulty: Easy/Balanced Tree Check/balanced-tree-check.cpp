/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
    int height(Node* root)
  {
    if(root==NULL) return 0;

    int l=height(root->left);
    if(l==-1) return -1;
    int r=height(root->right);
    if(r==-1) return -1;
    if(abs(l-r)>1) return -1;
    return 1+max(l,r);
  }
    bool isBalanced(Node* root) {
        // Code here
        return height(root)!=-1;
    }
};