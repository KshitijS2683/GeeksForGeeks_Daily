/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    Node* sumtree(Node* root)
    {
        root->data = NULL;
        if(root->left == NULL && root->right == NULL)
        {
            root->data = 0;
        }
        if(root->left != NULL)
        {
            root->data += root->left->data;
            root->left = sumtree(root->left);
            root->data += root->left->data;
            
        }
        if(root->right != NULL)
        {
            root->data += root->right->data;
            root->right = sumtree(root->right);
            root->data += root->right->data;
        }
        return root;
        
    }
    void toSumTree(Node *node) {
        // Your code here
        Node* root = node;
       node = sumtree(node);
    }
};