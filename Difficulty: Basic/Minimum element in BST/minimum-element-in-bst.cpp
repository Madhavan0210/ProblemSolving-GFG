// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/

class Solution {
  public:
    void preorder(Node* root,int &mini)
    {
        if(root==NULL) return;
        mini=min(root->data,mini);
        preorder(root->left,mini);
        preorder(root->right,mini);
    }
    int minValue(Node* root) {
        // Code here
        int mini=INT_MAX;
        preorder(root,mini);
        return mini;
    }
};