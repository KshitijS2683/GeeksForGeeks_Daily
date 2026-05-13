// User function Template for C++

class Solution {
  public:
    bool anagram(vector<Node*> a,vector<Node*> b)
    {
        unordered_map<int,int> aa,bb;
        for(int i = 0;i<a.size();i++)
        {
            aa[a[i]->data]++;
        }
        for(int i = 0;i<b.size();i++)
        {
            bb[b[i]->data]++;
        }
        return aa == bb;
    }
    bool areAnagrams(Node *root1, Node *root2) {
        vector<Node*> r1,t1,r2,t2;
        r1.push_back(root1);
        r2.push_back(root2);
        if(!anagram(r1,r2))
        {
            return false;
        }
        while(!r1.empty() && !r2.empty())
        {
            t1.clear();
            t2.clear();
            for(int i = 0;i<r1.size();i++)
            {
                if(r1[i]->left != NULL)
                {
                    t1.push_back(r1[i]->left);
                }
                if(r1[i]->right != NULL)
                {
                    t1.push_back(r1[i]->right);
                }
            }
            for(int i = 0;i<r2.size();i++)
            {
                if(r2[i]->left != NULL)
                {
                    t2.push_back(r2[i]->left);
                }
                if(r2[i]->right != NULL)
                {
                    t2.push_back(r2[i]->right);
                }
            }
            if(!anagram(t1,t2))
            {
                return false;
                break;
            }
            r1 = t1;
            r2 = t2;
        }
        if(!r1.empty() || !r2.empty())
        {
            return false;
        }
        
        return true;
        
        
        
        
        
    }
};