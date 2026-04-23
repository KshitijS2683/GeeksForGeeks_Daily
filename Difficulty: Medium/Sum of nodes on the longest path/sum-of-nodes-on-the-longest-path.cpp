/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    pair<int,int> longsum(Node *root,int height,int sum)
    {
        pair<int,int> inp,left,right;
        if(root == NULL)
        {
            return {height-1,sum};
        }
        left = longsum(root->left,height+1,sum + root->data);
        right = longsum(root->right,height+1,sum + root->data);
        if(left.first > right.first)
        {
            return left;
        }
        else if(left.first < right.first)
        {
            return right;
        }
        else
        {
            return {left.first,max(left.second,right.second)};
        }
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int height = 1;
        int sum = 0;
        
        return longsum(root,height,sum).second;
        
    }
};