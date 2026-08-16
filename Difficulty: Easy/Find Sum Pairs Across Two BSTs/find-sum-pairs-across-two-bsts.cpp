/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void order(Node* root1,vector<int> &out)
    {
        if(root1 != NULL)
        {
            order(root1->left,out);
            out.push_back(root1->data);
            order(root1->right,out);
        }
    }
    int countPairs(Node* root1, Node* root2, int x) {
        // code here
        vector<int> out1,out2;
        int ans = 0;
        order(root1,out1);
        order(root2,out2);
        int i = 0,j=out2.size()-1;
        while(i<out1.size() && j>=0)
        {
            if(out1[i] + out2[j] == x)
            {
                ans++;
                i++;
                j--;
            }
            else if(out1[i] + out2[j] > x)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
        
    }
};