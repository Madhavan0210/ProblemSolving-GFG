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
    // Function to check if two trees are identical.
    bool isIdentical(Node *p, Node *q) {
        // Your Code here
         if(p==NULL || q==NULL) return p==q;
        return (p->data==q->data) && isIdentical(p->left,q->left) && isIdentical(p->right,q->right);
    }
};