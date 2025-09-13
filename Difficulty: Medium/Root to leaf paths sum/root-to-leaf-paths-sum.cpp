/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution {
  public:
      void addSum(Node* root,int s,int &sum)
    {
        if(!root) return;
       s=s*10+root->data;
       if(root->left==NULL && root->right==NULL)
       {
         sum+=s;
         return;
       }
      if(root->left) addSum(root->left,s,sum);
      if(root->right) addSum(root->right,s,sum);
      
    }
    int treePathsSum(Node *root) {
        // code here.
        int sum=0;
        int s=0;
        addSum(root,s,sum);
        return sum;
    }
};