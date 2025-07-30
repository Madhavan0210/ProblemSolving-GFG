/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool binarySearchTree(Node* root,int mini,int maxi)
    {
      if(root==NULL) return true;
      if(root->data <=mini || root->data>=maxi) return false;
      return binarySearchTree(root->left,mini,root->data) && binarySearchTree(root->right,root->data,maxi);
    }
    bool isBST(Node* root) {
        // Your code here
        return binarySearchTree(root,INT_MIN,INT_MAX);
    }
};