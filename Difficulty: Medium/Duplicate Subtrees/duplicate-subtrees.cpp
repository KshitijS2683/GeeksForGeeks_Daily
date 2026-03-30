class Solution {
  public:
    string find(Node* root,vector<Node*> &out,unordered_map<string,int> &inp)
    {
        if(root == NULL)
        {
            return "N";
        }
        string s = to_string(root->data) + ',' + find(root->left,out,inp) + 
        ',' + find(root->right,out,inp);
        inp[s]++;
        if(inp[s] == 2)
        {
            out.push_back(root);
        }
        return s;

    }
    vector<Node*> printAllDups(Node* root) {
        // Code here
        vector<Node*> out;

        unordered_map<string,int> inp;
        find(root,out,inp);
        return out;
    }
};