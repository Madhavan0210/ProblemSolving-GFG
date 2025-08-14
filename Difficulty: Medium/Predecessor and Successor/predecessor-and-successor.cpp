/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    Node* successor(Node* root,int key)
    {
        Node* sNode=NULL;
        while(root)
        {
            if(root->data>key)
            {
                sNode=root;
                root=root->left;
            }
            else
            {
                root=root->right;
            }
        }
        return sNode;
    }
     Node* predecessor(Node* root,int key)
    {
        Node* pNode=NULL;
        while(root)
        {
            if(root->data<key)
            {
                pNode=root;
                root=root->right;
            }
            else
            {
                root=root->left;
            }
        }
        return pNode;
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* p=predecessor(root,key);
        Node* s=successor(root,key);
        return {p,s};
        
    }
};