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
    vector<int> postorder(Node* root, vector<int> out)
    {
        if(root == NULL)
        {
            return out;
        }
        out = postorder(root->left,out);
        out = postorder(root->right,out);
        out.push_back(root->data);
        return out;
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> out = {};
        return postorder(root,out);
        
    }
};