/*

Definition for Binary Tree Node
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
    void binaryPath(vector<vector<int>>&ans,Node* root,vector<int>temp)
    {
        temp.push_back(root->data);
        if(root->left!=NULL) binaryPath(ans,root->left,temp);
         if(root->right!=NULL) binaryPath(ans,root->right,temp);
          if(!root->left && !root->right) 
          {
            ans.push_back(temp);
            return;
          }
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
         vector<int>temp;
        vector<vector<int>>ans;
        binaryPath(ans,root,temp);
        return ans;
    }
};