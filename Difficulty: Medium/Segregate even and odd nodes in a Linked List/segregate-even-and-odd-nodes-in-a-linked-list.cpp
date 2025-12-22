// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        Node* odd = NULL;
        Node* even = NULL;
        Node* oddhead = NULL;
        Node* evenhead = NULL;
        Node* temp = head;
        while(temp != NULL)
        {
            if(temp->data%2 == 0)
            {
                if(evenhead == NULL)
                {
                    evenhead = new Node(temp->data);
                    even = evenhead;
                }
                else
                {
                    Node* next = new Node(temp->data);
                    even->next = next;
                    even = even->next;
                }
            }
            else
            {
                if(oddhead == NULL)
                {
                    oddhead = new Node(temp->data);
                    odd = oddhead;
                }
                else
                {
                    Node* next = new Node(temp->data);
                    odd->next = next;
                    odd = odd->next;
                }
            }
            temp = temp->next;
        }
        if(even == NULL)
        {
            return oddhead;
        }
        even->next = oddhead;
        return evenhead;
        
    }
};