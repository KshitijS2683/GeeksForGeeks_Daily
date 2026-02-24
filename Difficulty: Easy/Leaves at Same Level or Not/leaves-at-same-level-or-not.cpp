/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    /*You are required to complete this method*/
    vector<int> checkHeight(Node* root,int count,vector<int>& height)
    {
        if(root == NULL)
        {
            return height;
        }
        if(root->left ==NULL && root->right == NULL)
        {
            height.push_back(count);
            return height;
        }
        if(root->left)
        {
            height = checkHeight(root->left,count+1,height);
        }
        if(root->right)
        {
            height = checkHeight(root->right,count+1,height);
        }
        return height;
    }
    bool check(Node *root) {
        // Your code here
        vector<int> height;
        int count = 0;
        height = checkHeight(root, count,height);
        for(int i = 1;i<height.size();i++)
        {
            if(height[i] != height[i-1])
            {
                return false;
            }
            
        }
        return true;
    }
};