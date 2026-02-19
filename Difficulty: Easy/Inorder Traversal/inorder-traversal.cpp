/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> inorder(Node* root,vector<int> out)
    {
        if(root == NULL)
        {
            return out;
        }
        out = inorder(root->left,out);
        out.push_back(root->data);
        out = inorder(root->right,out);
        return out;
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> out;
        out = inorder(root,out);
        return out;
    }
};