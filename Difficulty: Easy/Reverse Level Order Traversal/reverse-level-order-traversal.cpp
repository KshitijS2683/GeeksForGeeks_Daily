/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> level(Node *root,vector<int> out)
    {
        if(root == NULL)
        {
            return out;
        }
        if(root->left != NULL)
        {
            out.push_back(root->left->data);
        }
        if(root->right != NULL)
        {
            out.push_back(root->right->data);
        }
        out = level(root->left,out);
        out = level(root->right,out);
        return out;
        
        
    }
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        // vector<int> out = {};
        // out.push_back(root->data);
        // out = level(root,out);
        // reverse(out.begin(),out.end());
        // return out;
        vector<int> out;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            out.push_back(temp->data);
            if(temp != NULL && temp->right != NULL)
            {
               q.push(temp->right); 
            }
            if(temp != NULL && temp->left != NULL)
            {
                q.push(temp->left);
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};