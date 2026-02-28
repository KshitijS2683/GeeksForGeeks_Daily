/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool inorder(Node* root,vector<int> &out)
    {
        if(root == NULL)
        {
            return true;
        }
        if(!inorder(root->left,out)) return false;
        if(root->data<out.back())
        {
            return false;
        }
        out.push_back(root->data);
        if(!inorder(root->right,out)) return false;
        return true;
    }
    bool isBST(Node* root) {
        // code here
        vector<int> out;
        out.push_back(INT_MIN);
        // out = inorder(root,out);
        // vector<int> temp = out;
        // sort(temp.begin(),temp.end());
        // for(int i = 1;i<out.size();i++)
        // {
        //     if(out[i]<out[i-1])
        //     {
        //         return false;
        //     }
        // }
        return inorder(root,out);
        
    }
};