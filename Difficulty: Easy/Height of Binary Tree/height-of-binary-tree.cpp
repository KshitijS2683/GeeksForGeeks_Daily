/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int noofnodes(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        return 1 + max(noofnodes(root->left),noofnodes(root->right));
        
    }
    int height(Node* root) {
        // code here
        return noofnodes(root)-1;

        
    }
};