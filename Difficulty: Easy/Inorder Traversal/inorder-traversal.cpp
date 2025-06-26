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
    // Function to return a list containing the inorder traversal of the tree.
     void inordertraversal(Node* temp,vector<int>&ans)
        {
            if(temp==NULL) return;
             inordertraversal(temp->left,ans);
              ans.push_back(temp->data);
             inordertraversal(temp->right,ans);
        }
    vector<int> inOrder(Node* root) {
        // Your code here
         vector<int>ans;
            inordertraversal(root,ans);
            return ans;
        
    }
};