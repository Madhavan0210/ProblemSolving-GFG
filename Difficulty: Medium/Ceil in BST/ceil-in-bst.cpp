/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */
int ceilBST(Node* root,int input,int &ans)
{
    if(root==NULL) return -1;
    if(root->data>=input && ans>root->data) ans=root->data;
    if(root->data>=input) return ceilBST(root->left,input,ans);
    else return ceilBST(root->right,input,ans);
}
int findCeil(Node* root, int input) {
    // Your code here
    int ans=INT_MAX;
    ceilBST(root,input,ans);
    return ans!=INT_MAX?ans:-1;
}