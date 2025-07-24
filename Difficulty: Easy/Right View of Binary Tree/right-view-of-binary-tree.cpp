/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
     void helper(Node* root,vector<int>&vec,int level)
    {
     if(root==NULL) return;
     if(vec.size()==level) vec.push_back(root->data);
     helper(root->right,vec,level+1);
     helper(root->left,vec,level+1);
    }
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int>vec;
      helper(root,vec,0);
      return vec;
    }
};