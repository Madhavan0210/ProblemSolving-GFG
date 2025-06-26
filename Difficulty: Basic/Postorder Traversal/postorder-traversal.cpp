/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
     void postorderT(Node* temp,vector<int>&ans)
  {
    if(temp==NULL) return;
    postorderT(temp->left,ans);
    postorderT(temp->right,ans);
    ans.push_back(temp->data);
  }
    vector<int> postOrder(Node* root) {
        // Your code here
         vector<int>ans;
        postorderT(root,ans);
        return ans;
    }
};