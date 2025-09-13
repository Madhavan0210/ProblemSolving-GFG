/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution {
  public:
    void inorder(Node* root,Node* &prev,int &diff) {
        if (!root) return;

        inorder(root->left,prev,diff);

        if (prev != nullptr) {
            diff = min(diff, abs(root->data - prev->data));
        }
        prev = root;

        inorder(root->right,prev,diff);
    }
    int absolute_diff(Node *root) {
        // Your code here
        Node* prev=nullptr;
        int diff=INT_MAX;
        inorder(root,prev,diff);
        return diff;
    }
};
