// User function Template for C++

/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/

class Solution {
  public:
    // Function to find largest subtree sum.
    int find(Node* root,int &max_sum)
    {
        if(root == NULL)
        {
            return 0;
        }
        int sum = root->data + find(root->left,max_sum) + find(root->right,max_sum);
        max_sum = max(sum,max_sum);
        return sum;
    }
    int findLargestSubtreeSum(Node* root) {
        // Write your code here
        int max_sum = INT_MIN;
        int curr = 0;
        curr = find(root,max_sum);
        return max_sum;
    }
};
