class Solution {
  public:

    void addLeaf(Node *root, vector<int> &out) {
        if (root == NULL) return;

        if (root->left == NULL && root->right == NULL) {
            out.push_back(root->data);
            return;
        }
        addLeaf(root->left, out);
        addLeaf(root->right, out);
    }

    vector<int> boundaryTraversal(Node *root) {
        vector<int> out;
        if (root == NULL) return out;

        out.push_back(root->data);

        // Left boundary (excluding leaves)
        Node *temp = root->left;
        while (temp != NULL) {
            if (!(temp->left == NULL && temp->right == NULL))
                out.push_back(temp->data);

            if (temp->left != NULL)
                temp = temp->left;
            else
                temp = temp->right;
        }

        // Leaf nodes (exclude root)
        addLeaf(root->left, out);
        addLeaf(root->right, out);

        // Right boundary (excluding leaves)
        vector<int> right;
        temp = root->right;
        while (temp != NULL) {
            if (!(temp->left == NULL && temp->right == NULL))
                right.push_back(temp->data);

            if (temp->right != NULL)
                temp = temp->right;
            else
                temp = temp->left;
        }

        reverse(right.begin(), right.end());
        out.insert(out.end(), right.begin(), right.end());

        return out;
    }
};