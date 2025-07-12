// Class that contains the logic to build the binary tree
/*
Definition of the Node class
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
         map<int,int>inmap;
        for(int i=0;i<inorder.size();i++) inmap[inorder[i]]=i;
        Node* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inmap);
        return root;
    }
     Node* buildTree(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,map<int,int>&inmap)
    {
        if(prestart>preend || instart>inend) return NULL;
        Node* root=new Node(preorder[prestart]);
        int inroot=inmap[root->data];
        int numsleft=inroot-instart;
        root->left=buildTree(preorder,prestart+1,prestart+numsleft,inorder,instart,inroot-1,inmap);
        root->right=buildTree(preorder,prestart+numsleft+1,preend,inorder,inroot+1,inend,inmap);
        return root;
    }
};