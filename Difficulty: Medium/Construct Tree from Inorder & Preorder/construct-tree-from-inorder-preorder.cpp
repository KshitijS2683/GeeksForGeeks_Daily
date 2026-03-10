class Solution {
  public:
    Node *build(vector<int> &inorder, vector<int> &preorder, int start, int end,
                unordered_map<int,int> &index, int &preIndex)
    {
        if(start > end)
        {
            return NULL;
        }

        Node* root = new Node(preorder[preIndex++]);
        int root_index = index[root->data];

        root->left = build(inorder, preorder, start, root_index - 1, index, preIndex);
        root->right = build(inorder, preorder, root_index + 1, end, index, preIndex);

        return root;
    }

    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        unordered_map<int,int> inorder_index;

        for(int i = 0; i < inorder.size(); i++)
        {
            inorder_index[inorder[i]] = i;
        }

        int preIndex = 0;
        return build(inorder, preorder, 0, inorder.size()-1, inorder_index, preIndex);
    }
};