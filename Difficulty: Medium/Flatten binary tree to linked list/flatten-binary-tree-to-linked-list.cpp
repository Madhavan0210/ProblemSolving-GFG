// User function Template for C++

class Solution {
  public:
  void preorder(Node* root,queue<Node*>&q)
    {
        if(root==NULL) return;
        q.push(root);
        preorder(root->left,q);
        preorder(root->right,q);
    }
    void flatten(Node *root) {
        // code here
         if(root==NULL) return;
        queue<Node*>q;
        preorder(root,q);
        while(!q.empty())
        {
            Node* currNode=q.front();
            q.pop();
            currNode->left=NULL;
            if(!q.empty()) currNode->right=q.front();
        }
    }
};