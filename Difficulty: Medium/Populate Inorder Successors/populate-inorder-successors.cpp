/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};
*/
class Solution {
  public:
    void inorder(Node *root,vector<Node*> &out)
    {
        if(root != NULL)
        {
            inorder(root->left,out);
            out.push_back(root);
            inorder(root->right,out);
        }
    }
    void populateNext(Node *root) {
        // code here
        vector<Node*> out;
        inorder(root,out);
        for(int i = 0;i<out.size()-1;i++)
        {
            out[i]->next = out[i+1];
        }
    }
};