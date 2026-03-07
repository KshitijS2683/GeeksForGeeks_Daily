/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    bool isSum(Node* root)
{
    bool left = true, right = true;

    if(root == NULL)
        return true;

    if(root->left == NULL && root->right == NULL)
        return true;

    if(root->left != NULL)
        left = isSum(root->left);

    if(root->right != NULL)
        right = isSum(root->right);

    if(root->left != NULL && root->right != NULL &&
       root->left->left == NULL && root->left->right == NULL &&
       root->right->left == NULL && root->right->right == NULL)
    {
        if(root->data == root->left->data + root->right->data)
        {
            root->data += root->left->data + root->right->data;
            root->right = NULL;
            root->left = NULL;
            return left && right;
            
        }
        else
            return false;
    }

    if(root->left != NULL && root->left->left == NULL && root->left->right == NULL)
    {
        if(root->data == root->left->data)
        {
            root->data += root->left->data;
            root->left = NULL;
            return left && right;
        }
        else
            return false;
    }

    if(root->right != NULL && root->right->left == NULL && root->right->right == NULL)
    {
        if(root->data == root->right->data)
        {
            root->data += root->right->data;
            root->right = NULL;
            return left && right;
        }
        else
            return false;
    }
    return left && right;
}
    bool isSumTree(Node* root) {
        // Your code here
        return isSum(root);
        
    }
};