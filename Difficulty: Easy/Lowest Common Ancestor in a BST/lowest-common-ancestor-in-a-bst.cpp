/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
     Node* helper(Node* root,Node* p,Node* q,Node* leftTree,Node* rightTree)
    {
         if(root==NULL || root->data==p->data || root->data==q->data) return root;
        if(root->data>p->data || root->data>q->data) leftTree=helper(root->left,p,q,leftTree,rightTree);
        if(root->data<p->data || root->data<q->data) rightTree=helper(root->right,p,q,leftTree,rightTree);
        if(leftTree==NULL) return rightTree;
        else if(rightTree==NULL) return leftTree;
        else return root;
    }
    Node* LCA(Node* root, Node* p, Node* q) {
        // code here
          Node* leftTree=NULL;
       Node* rightTree=NULL;
       return helper(root,p,q,leftTree,rightTree);
    }
};