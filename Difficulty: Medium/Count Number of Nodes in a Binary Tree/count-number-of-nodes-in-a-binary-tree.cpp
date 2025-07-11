// User function Template for C++

class Solution {
  public:
     int findheightLeft(Node* root)
    {
        int height=0;
        while(root)
        {
            height++;
            root=root->left;
        }
        return height;
    }
     int findheightRight(Node* root)
    {
        int height=0;
        while(root)
        {
            height++;
            root=root->right;
        }
        return height;
    }

    int countNodes(Node* root) {
        // Write your code here
         int lh=findheightLeft(root);
        int rh=findheightRight(root);
        if(lh==rh) return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};