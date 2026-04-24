/*Complete the function below
Node is as follows:
struct Node {
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
    // Return True if the given trees are isomotphic. Else return False.
    bool check(Node *root1, Node *root2)
    {
        bool left = false,right = false;
        if(root1 == NULL && root2 == NULL)
        {
            return true;
        }
        if(root1 == NULL || root2 == NULL) 
        {
            return false;
        }
        if(root1->data != root2->data)
        {
            return false;
        }
            left = check(root1->left,root2->left) && check(root1->right,root2->right);
            right = check(root1->left,root2->right) && check(root1->right,root2->left);
        return left || right;
    }
    bool isIsomorphic(Node *root1, Node *root2) {
        // add code here.
        return check(root1,root2);
    }
};