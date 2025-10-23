/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void sibling(Node* root,vector<int>&ans)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right) ans.push_back(root->right->data);
    if(root->right==NULL && root->left) ans.push_back(root->left->data);
    sibling(root->left,ans);
    sibling(root->right,ans);
}
vector<int> noSibling(Node* node) {
    // code here
    vector<int>ans;
    sibling(node,ans);
    if(ans.size()==0) ans.push_back(-1);
    sort(ans.begin(),ans.end());
    return ans;
}