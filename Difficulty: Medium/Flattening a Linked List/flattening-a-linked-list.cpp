/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/
class Solution {
  public:
  
    Node *sorting(Node *root){
        Node* temp = root;
        vector<int> out;
        while(temp != NULL)
        {
            out.push_back(temp->data);
            temp = temp->next;
        }
        sort(out.begin(),out.end());
        temp = root;
        int i = 0;
        while(temp != NULL && i<out.size())
        {
            temp->data = out[i];
            temp = temp->next;
            i++;
        }
        return root;
        
    }
    Node *flatten(Node *root) {
        // code here
        Node* curhead = root;
        Node* tempnext = NULL;
        Node* tempbottom = NULL;
        while(curhead != NULL)
        {
            tempnext = curhead->next;
            tempbottom = curhead;
            while(tempbottom->bottom != NULL)
            {
                tempbottom->next = tempbottom->bottom;
                tempbottom = tempbottom->bottom;
            }
            tempbottom->next = tempnext;
            tempbottom->bottom = tempnext;
            curhead = tempnext;
        }
        curhead = root;
        root = sorting(root);
        return root;
    }
};