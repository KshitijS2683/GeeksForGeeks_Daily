/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        queue<Node*> q1,q2;
        vector<vector<int>> out;
        out.push_back({root->data});
        q1.push(root);
        q2.push(root);
        while(!q2.empty())
        {
            vector<int> c;
            q2 = {};
            while(!q1.empty())
            {
                Node* temp = q1.front();
                if(temp->left != NULL)
                {
                    q2.push(temp->left);
                    c.push_back(temp->left->data);
                    
                }
                if(temp->right != NULL)
                {
                    q2.push(temp->right);
                    c.push_back(temp->right->data);
                    
                }
                q1.pop();
            }
            q1 = q2;
            out.push_back(c);
        }
        return out;
    }
};