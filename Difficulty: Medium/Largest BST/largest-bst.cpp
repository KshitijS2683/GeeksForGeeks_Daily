class Solution {
  public:

    struct Info {
        int size;     // size of subtree
        int minVal;   // minimum in subtree
        int maxVal;   // maximum in subtree
        bool isBST;   // whether subtree is BST
    };

    int maxSize = 0;

    Info solve(Node* root) {
        if (root == NULL) {
            return {0, INT_MAX, INT_MIN, true};
        }

        Info left = solve(root->left);
        Info right = solve(root->right);

        Info curr;
        curr.size = left.size + right.size + 1;

        if (left.isBST && right.isBST &&
            root->data > left.maxVal &&
            root->data < right.minVal) {

            curr.isBST = true;
            curr.minVal = min(root->data, left.minVal);
            curr.maxVal = max(root->data, right.maxVal);

            maxSize = max(maxSize, curr.size);
        }
        else {
            curr.isBST = false;
        }

        return curr;
    }

    int largestBst(Node *root) {
        solve(root);
        return maxSize;
    }
};