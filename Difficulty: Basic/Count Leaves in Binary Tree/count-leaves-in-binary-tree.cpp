/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void count(Node* root,int &cnt)
    {
        if(root==NULL) return;
        if(!root->left && !root->right) cnt++;
        count(root->left,cnt);
        count(root->right,cnt);
    }
    int countLeaves(Node* root) {
        // write code here
        int cnt=0;
        count(root,cnt);
        return cnt;
    }
};