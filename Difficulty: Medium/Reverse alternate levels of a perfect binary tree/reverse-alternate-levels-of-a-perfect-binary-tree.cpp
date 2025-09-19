/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
class Solution {
  public:
    void dfsSwap(Node* a, Node* b, int level) {
        if (!a || !b) return;
        // swap values only at odd levels
        if (level % 2 == 1) {
            swap(a->data, b->data);
        }
        // recurse on symmetric children pairs
        dfsSwap(a->left,  b->right, level + 1);
        dfsSwap(a->right, b->left,  level + 1);
    }
    void reverseAlternate(Node *root) {
        // Your code here
        dfsSwap(root->left, root->right, 1);
    }
};