/* A binary tree node

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
    // Function to check if S is a subtree of tree T.
     bool checkSubTree(Node* root, Node* subRoot)
    {
        if (!root && !subRoot) return true;  
        if (!root || !subRoot) return false;  

        if (root->data != subRoot->data) return false;

        return checkSubTree(root->left, subRoot->left) &&
               checkSubTree(root->right, subRoot->right);
    }

    bool isSubTree(Node* root, Node* subRoot) {
        // Your code here
        if (!root) return false;

        if (checkSubTree(root, subRoot)) return true;

        return isSubTree(root->left, subRoot) || 
               isSubTree(root->right, subRoot);
    }
};