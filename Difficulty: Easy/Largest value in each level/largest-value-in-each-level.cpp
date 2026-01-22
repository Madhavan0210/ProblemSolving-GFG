// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
         queue<Node*>q;
        vector<int>ans;
         if(root==NULL) return ans;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        int maxi=INT_MIN;
        for(int i=0;i<size;i++)
        {
            Node* Tnode=q.front();
            q.pop();
            maxi=max(maxi,Tnode->data);
            if(Tnode->left!=NULL) q.push(Tnode->left); 
            if(Tnode->right!=NULL) q.push(Tnode->right); 
        }
        ans.push_back(maxi);
    }
    return ans;

    }
};