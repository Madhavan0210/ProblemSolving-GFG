/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
          queue<Node*>q;
        vector<vector<int>>ans;
         if(root==NULL) return ans;
    q.push(root);
    while(!q.empty())
    {
        vector<int>temp;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            Node* Tnode=q.front();
            q.pop();
            if(Tnode->left!=NULL) q.push(Tnode->left); 
            if(Tnode->right!=NULL) q.push(Tnode->right); 
            temp.push_back(Tnode->data);
        }
        ans.push_back(temp);
    }
    return ans;
    }
};