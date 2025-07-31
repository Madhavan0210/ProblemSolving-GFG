/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
    bool path(Node* root,int target,int sum)
    {
        if(root==NULL) return false;
        if (root->left == NULL && root->right == NULL && target == sum + root->data) return true;
        return path(root->left,target,sum+root->data) || path(root->right,target,sum+root->data);
    }
    bool hasPathSum(Node *root, int target) {
        // Your code here
         return path(root,target,0);
    } 
};