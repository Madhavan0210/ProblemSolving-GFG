class Solution {
  public:
    // Function to delete a node from BST.
    Node *deleteNode(Node *root, int key) {
        // your code goes here
         if(root==NULL) return NULL;
        if(root->data==key) return helper(root);
        Node* dummy=root;
        while(root!=NULL)
        {
            if(root->data>key)
            {
                if(root->left && root->left->data==key)
                {
                    root->left=helper(root->left);
                    break;
                }
                else root=root->left;
            }
            else
            {
                if(root->right && root->right->data==key)
                {
                    root->right=helper(root->right);
                    break;
                }
                else root=root->right;
            }
        }
        return dummy;
    }
      Node* leftFinder(Node* root)
    {
        if(root->right==NULL) return root;
        return leftFinder(root->right);
    }
    Node* helper(Node* root)
    {
        if(root->left==NULL) return root->right;
        else if(root->right==NULL) return root->left;
        Node* rightchild=root->right;
        Node* leftMostRight=leftFinder(root->left);
        leftMostRight->right=rightchild;
        return root->left;
    }
};