/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class  BSTIterator{
    stack<Node*>st;
    bool reverse=true;
    public:
    BSTIterator(Node* root,bool isReverse)
    {
        reverse=isReverse;
        pushAll(root);
    }
    bool hashNext(Node* root)
    {
        return !st.empty();
    }
    int next()
    {
        Node* temp=st.top();
        st.pop();
        if(!reverse) pushAll(temp->right);
        else pushAll(temp->left);
        return temp->data;
    }
    private:
    void pushAll(Node* root)
    {
      for(;root!=NULL;)
      {
        st.push(root);
        if(reverse) root=root->right;
        else root=root->left;
      }
    }
 };

class Solution {
  public:
    bool findTarget(Node *root, int k) {
        // your code here.
         if(!root) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next();
        int j=r.next();
        while(i<j)
        {
            if(i+j<k) i=l.next();
            else if(i+j>k) j=r.next();
            else return true;
        }
        return false;
    }
};