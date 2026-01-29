/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> out;
        queue<Node*> q;
        int n;
        q.push(root);
        while(!q.empty())
        {
            n = q.size();
            out.push_back(q.front()->data);
            while(n--)
            {
                Node* temp = q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return out;
    }
};