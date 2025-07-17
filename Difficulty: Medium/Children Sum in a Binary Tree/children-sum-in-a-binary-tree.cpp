/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
        // Add your code here
        if (root == NULL || (root->left == NULL && root->right == NULL))
        return 1;

    int childSum = 0;
    if (root->left) childSum += root->left->data;
    if (root->right) childSum += root->right->data;

    if ((root->data == childSum) &&
        isSumProperty(root->left) &&
        isSumProperty(root->right)) {
        return 1;
    }

    return 0;
    }
};