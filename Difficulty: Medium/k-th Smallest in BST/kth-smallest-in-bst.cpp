/*Complete the function below

struct Node {
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
    // Return the Kth smallest element in the given BST
    void inorder(Node* root,vector<int>&ans)
    {
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    int kthSmallest(Node *root, int k) {
        // add code here.
         vector<int>ans;
        inorder(root,ans);
        return ans.size()<k-1?-1:ans[k-1];
    }
};