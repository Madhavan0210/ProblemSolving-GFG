/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Your are required to complete this function
    // function should return the tilt of the tree
     int helper(Node* root,int &sum)
    {
      if(root==NULL) return 0;
      int l=helper(root->left,sum);
      int r=helper(root->right,sum);
      sum+=abs(l-r);
     return l + r + root->data;
    }
    int tiltTree(Node *root) {
        // code here
         int sum=0;
        helper(root,sum);
        return sum;
    }
};