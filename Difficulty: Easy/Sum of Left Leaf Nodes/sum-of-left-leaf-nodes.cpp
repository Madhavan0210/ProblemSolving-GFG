/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all
// left leaf nodes
class Solution {
  public:
  bool isLeaf(Node* root)
    {
        if(root->left==NULL && root->right==NULL) return true;
        return false;
    }
    int leftLeavesSum(Node *root) {
        // Code here
         int sum=0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int S=q.size();
            for(int i=0;i<S;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                  if(isLeaf(temp->left)) sum+=temp->left->data;
                  q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                  q.push(temp->right);
                }
            }
        }
        return sum;
    }
};