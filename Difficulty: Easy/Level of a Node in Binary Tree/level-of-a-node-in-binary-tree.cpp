/*
Structure of the node of the binary tree is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
*/
class Solution {
  public:
    // function should return level of the target node
    int findLevel(struct Node *node,int target,int level)
    {
        if(node==NULL) return 0;
    if(node->data==target) return level;
     int l= findLevel(node->left,target,level+1);
     if(l != 0) return l;

    return findLevel(node->right,target,level+1);
    }
    int getLevel(struct Node *node, int target) {
        // code here
        int level=1;
        return findLevel(node,target,level);
    }
};