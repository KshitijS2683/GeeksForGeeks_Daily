class Solution {
  public:
    Node *tree(string &s,int &i)
    {
        if(i < s.size() && s[i] == ')')  // handle ()
            return NULL;

        int num = 0;
        while(i < s.size() && isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
            i++;
        }

        Node *root = new Node(num);
        
        if(i < s.size() && s[i] == '(')
        {
            i++;
            root->left = tree(s,i);
            if(i < s.size() && s[i] == ')') i++;
        }

        if(i < s.size() && s[i] == '(')
        {
            i++;
            root->right = tree(s,i);
            if(i < s.size() && s[i] == ')') i++;
        }

        return root;
    }

    Node *treeFromString(string str) {
        int i = 0;
        return tree(str,i);
    }
};