/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};
*/

class Solution {
  public:
    Node* buildBST(vector<int>& nums, int l, int r) {
        if (l > r) return NULL;
        int mid = (l + r) / 2; 
        Node* root = new Node(nums[mid]);
        root->left = buildBST(nums, l, mid - 1);
        root->right = buildBST(nums, mid + 1, r);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
         return buildBST(nums, 0, nums.size() - 1);
    }
};