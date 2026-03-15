class Solution {
  public:
  
    void inorder(Node* root, vector<Node*> &out)
    {
        if(root == NULL)
            return;
            
        inorder(root->left,out);
        out.push_back(root);
        inorder(root->right,out);
    }

    vector<Node*> findPreSuc(Node* root, int key) {
        
        vector<Node*> out;
        inorder(root,out);
        
        Node* pre = NULL;
        Node* suc = NULL;
        
        for(int i = 0; i < out.size(); i++)
        {
            if(out[i]->data < key)
                pre = out[i];
            
            if(out[i]->data > key)
            {
                suc = out[i];
                break;
            }
        }
        
        return {pre, suc};
    }
};