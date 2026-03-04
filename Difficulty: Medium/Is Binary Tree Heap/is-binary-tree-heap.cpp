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
    bool max_heap(Node* root)
    {
        bool left = false,right=false;
        if(root == NULL)
        {
            return true;
        }
        if(root->left != NULL)
        {
            if(root->data >= root->left->data)
            {
                left = true;
            }
        }
        else
        {
            left = true;
        }
        if(root->right != NULL)
        {
            if(root->data >= root->right->data)
            {
                right = true;
            }
        }
        else
        {
            right = true;
        }
        
        return left && right && max_heap(root->left) && max_heap(root->right);
    }
    bool isHeap(Node* tree) {
        // code here
        bool max_heaps = max_heap(tree);
        bool completeness = true;
        bool flag = true;
        queue<Node*> q1,q2;
        q1.push(tree);
        while(!q1.empty())
        {
            q2 = q1;
            q1 = {};
            while(!q2.empty())
            {
                Node* temp = q2.front();
                q2.pop();
                if(temp->left != NULL && !flag)
                {
                    completeness = false;
                    break;
                }
                else if(temp->left != NULL)
                {
                    q1.push(temp->left);
                }
                else
                {
                    flag = false;
                }
                if(temp->right != NULL && !flag)
                {
                    completeness = false;
                    break;
                }
                else if(temp->right != NULL)
                {
                    q1.push(temp->right);
                }
                else
                {
                    flag = false;
                }
                
            }
            if(!completeness)
            {
                break;
            }
        }
        
        return max_heaps && completeness;
    }
};