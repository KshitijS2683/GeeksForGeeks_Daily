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
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* temp1 = dummy;
    Node* temp2 = dummy;
    while (temp2->next && temp2->next->data % 2 == 0) {
        temp2 = temp2->next;
    }
    temp1 = temp2;
    while (temp2->next) {
        if (temp2->next->data % 2 == 0) {
            Node* h = temp2->next;
            temp2->next = h->next;
            h->next = temp1->next;
            temp1->next = h;
            temp1 = h;
        } else {
            temp2 = temp2->next;
        }
    }
    return dummy->next;
        
        // Node* odd = NULL;
        // Node* even = NULL;
        // Node* oddhead = NULL;
        // Node* evenhead = NULL;
        // Node* temp = head;
        // while(temp != NULL)
        // {
        //     if(temp->data%2 == 0)
        //     {
        //         if(evenhead == NULL)
        //         {
        //             evenhead = new Node(temp->data);
        //             even = evenhead;
        //         }
        //         else
        //         {
        //             Node* next = new Node(temp->data);
        //             even->next = next;
        //             even = even->next;
        //         }
        //     }
        //     else
        //     {
        //         if(oddhead == NULL)
        //         {
        //             oddhead = new Node(temp->data);
        //             odd = oddhead;
        //         }
        //         else
        //         {
        //             Node* next = new Node(temp->data);
        //             odd->next = next;
        //             odd = odd->next;
        //         }
        //     }
        //     temp = temp->next;
        // }
        // if(even == NULL)
        // {
        //     return oddhead;
        // }
        // even->next = oddhead;
        // return evenhead;
        
    }
};