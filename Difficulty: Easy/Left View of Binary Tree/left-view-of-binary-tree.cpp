/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
     void helper(Node* root,vector<int>&vec,int level)
    {
     if(root==NULL) return;
     if(vec.size()==level) vec.push_back(root->data);
     helper(root->left,vec,level+1);
      helper(root->right,vec,level+1);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int>vec;
      helper(root,vec,0);
      return vec;
    }
};