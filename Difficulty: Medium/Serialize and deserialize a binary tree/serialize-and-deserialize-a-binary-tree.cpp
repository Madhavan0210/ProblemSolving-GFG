/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        // Your code here
            vector<int>vec;
        if(root==NULL) return vec;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            if(curr==NULL) vec.push_back(-1);
            else vec.push_back(curr->data);
            if(curr!=NULL)
            {
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return vec;
    }

    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr) {
        
        // Your code here
        if(arr.size()==0) return NULL;
        Node* root=new Node(arr[0]);
        int i=1;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* node=q.front();
            q.pop();
            int str=arr[i];
            if(str==-1)
            {
                node->left=NULL;
                i++;
            }
            else
            {
                Node* leftNode=new Node(str);
                node->left=leftNode;
                q.push(leftNode);
                i++;
            }
            str=arr[i];
            if(str==-1)
            {
                node->right=NULL;
                i++;
            }
            else{
                Node* rightNode=new Node(str);
                node->right=rightNode;
                q.push(rightNode);
                i++;
            }
        }
        return root;
    }
};