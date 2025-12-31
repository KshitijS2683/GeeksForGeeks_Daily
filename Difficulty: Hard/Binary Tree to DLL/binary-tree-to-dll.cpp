/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};
 */

// This function should return head to the DLL
class Solution {
  public:
  
    vector<int> arr;
    void inorder(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left);
        arr.push_back(root->data);
        inorder(root->right);
    }
    Node* bToDLL(Node* root) {
        // code here
        inorder(root);
        Node* head = new Node(arr[0]);
        Node* temp = head;
        for(int i = 1;i<arr.size();i++)
        {
            Node* next = new Node(arr[i]);
            temp->right = next;
            next->left = temp;
            temp = temp->right;
        }
        return head;
        
        
    }
};