// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* insert(Node* root, int val) {

        // Your code goes here
        if(root==NULL) return new Node(val);
        Node* head=root;
        while(true)
        {
        if(root->data==val) break;    
        if(root->data<val)
        {
            if(root->right!=NULL) root=root->right;
            else
            {
                root->right=new Node(val);
                break;
            }
        }
        else
        {
            if(root->left!=NULL) root=root->left;
            else{
                root->left=new Node(val);
                break;
            }
        }
        }
        return head;
    }
};