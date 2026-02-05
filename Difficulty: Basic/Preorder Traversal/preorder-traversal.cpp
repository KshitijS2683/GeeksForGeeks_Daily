/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> preorder(Node* root, vector<int> out)
    {
        out.push_back(root->data);
        if(root->left == NULL && root->right == NULL)
        {
            return out;
        }
        else if(root->left != NULL && root->right == NULL)
        {
            out = preorder(root->left,out);
        }
        else if(root->right != NULL && root->left == NULL )
        {
            out = preorder(root->right,out);
        }
        else 
        {
            out = preorder(root->left,out);
            out = preorder(root->right,out);
        }
        return out;
        
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> out;
        out = preorder(root,out);
        return out;
        
    }
};