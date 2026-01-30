/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int left = height(root->left);
        if(left == -1)
        {
            return -1;
        }
        int right = height(root->right);
        if(right == -1)
        {
            return -1;
        }
        if(abs(right - left) > 1)
        {
            return -1;
        }
        return max(left,right) + 1;
    }
    bool isBalanced(Node* root) {
        // code here
        return height(root) != -1;
    }
};