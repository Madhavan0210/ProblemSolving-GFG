/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int p, int q) {
        // Your code here
        if(root==NULL || root->data==p || root->data==q) return root;
         Node* left=lca(root->left,p,q);
         Node* right=lca(root->right,p,q);
         if(left==NULL) return right;
         if(right==NULL) return left;
         else return root; 
    }
};