/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
// your task is to complete this function
class Solution {
public:
    bool solve(Node* root, int node, int &k, int &ans) {
        if (!root) return false;

        if (root->data == node) return true;

        if (solve(root->left, node, k, ans) || solve(root->right, node, k, ans)) {
            k--;
            if (k == 0) {
                ans = root->data;
                return false;
            }
            return true;
        }
        return false;
    }

    int kthAncestor(Node *root, int k, int node) {
        int ans = -1;
        solve(root, node, k, ans);
        return ans;
    }
};
