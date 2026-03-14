/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* solve(Node* root,int n1,int n2,bool &v1,bool &v2)
    {
        if(root==NULL)
            return NULL;

        Node* temp=NULL;

        if(root->data==n1)
        {
            v1=true;
            temp=root;
        }

        if(root->data==n2)
        {
            v2=true;
            temp=root;
        }

        Node* left=solve(root->left,n1,n2,v1,v2);
        Node* right=solve(root->right,n1,n2,v1,v2);

        if(temp!=NULL)
            return temp;

        if(left && right)
            return root;

        return left?left:right;
    }
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // code here
        bool v1=false,v2=false;
        return solve(root,n1->data,n2->data,v1,v2);
        
    }
};