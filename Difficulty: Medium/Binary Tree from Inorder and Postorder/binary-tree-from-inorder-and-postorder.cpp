/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:

    // Function to return a tree created from postorder and inoreder traversals.
    Node* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> inmap;
        for (int i = 0; i < inorder.size(); ++i) {
            inmap[inorder[i]] = i;
        }

        return build(postorder, 0, postorder.size() - 1,
                     inorder, 0, inorder.size() - 1,
                     inmap);
    }

    Node* build(vector<int>& postorder, int postStart, int postEnd,
                vector<int>& inorder, int inStart, int inEnd,
                map<int, int>& inmap) {
        if (postStart > postEnd || inStart > inEnd)
            return nullptr;

        int rootVal = postorder[postEnd];
        Node* root = new Node(rootVal);

        int inRoot = inmap[rootVal];
        int leftSize = inRoot - inStart;

        root->left = build(postorder, postStart, postStart + leftSize - 1,
                           inorder, inStart, inRoot - 1, inmap);

        root->right = build(postorder, postStart + leftSize, postEnd - 1,
                            inorder, inRoot + 1, inEnd, inmap);

        return root;
    }
};