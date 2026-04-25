/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void add(Node *root,vector<int> &out)
    {
        if(root != NULL)
        {
            out.push_back(root->data);
            add(root->left,out);
            add(root->right,out);
        }
    }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int> out;
        add(root1,out);
        add(root2,out);
        sort(out.begin(),out.end());
        return out;
    }
};