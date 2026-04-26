/*
// Tree Node
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
    void get(Node *root, int l, int h,int &out)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->data >= l && root->data <= h)
        {
            out++;
        }
        get(root->left,l,h,out);
        get(root->right,l,h,out);
        
    }
    int getCount(Node *root, int l, int h) {
        // your code here
        int out = 0;
        get(root,l,h,out);
        return out;
    }
};