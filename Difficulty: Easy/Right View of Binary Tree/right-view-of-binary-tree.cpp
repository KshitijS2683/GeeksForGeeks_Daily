/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
    vector<int> out;
    if (root == nullptr) return out;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            // last node of this level
            if (i == size - 1) {
                out.push_back(curr->data);
            }

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
    return out;
}
};