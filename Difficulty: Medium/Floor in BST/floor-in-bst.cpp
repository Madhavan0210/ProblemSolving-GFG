// Function to search a node in BST.
class Solution {

  public:
    int findFloor(Node* root,int x,int &floor)
    {
        if(root==NULL) return floor;
        if(root->data<=x && floor<root->data)
        {
            floor=root->data;
            return findFloor(root->right,x,floor);
        }
        else return findFloor(root->left,x,floor);
    }
    int floor(Node* root, int x) {
        // Code here
        int floor=-1;
        return findFloor(root,x,floor);
    }
};