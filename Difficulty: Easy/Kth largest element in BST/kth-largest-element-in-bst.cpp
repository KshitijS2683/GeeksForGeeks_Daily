/*The Node structure is defined as
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

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  int k;
    vector<int> kth(Node *root,vector<int> out)
    {
        if(root == NULL)
        {
            return out;
        }
        out = kth(root->left,out);
        out.push_back(root->data);
        out = kth(root->right,out);
        return out;
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int> out = {};
        out = kth(root,out);
        for(int i = 0;i<out.size();i++)
        {
            if(out.size() - i == k)
            {
                return out[i];
            }
        }
        return 0;
        
    }
};