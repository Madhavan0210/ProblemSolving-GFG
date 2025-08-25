/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
        if(!root) return 0;
        queue<Node*> q;
        q.push(root);
        int depth=1;

        while(!q.empty()){
            int Size=q.size();

            for(int i=0; i<Size; i++){
                Node* node= q.front();q.pop();                
                if(!node->left && !node->right) return depth;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            depth++;
        }
        return 0;
    }
};