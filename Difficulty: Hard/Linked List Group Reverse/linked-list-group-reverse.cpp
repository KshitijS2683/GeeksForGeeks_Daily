/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  
    Node *reverse(Node *head,Node *end)
    {
        Node *prev = NULL;
        Node *temp = head;
        Node *next = NULL;
        while(temp != end)
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* dummy = new Node(0);
        dummy->next = head;
        Node* temp = head;
        Node* prev = dummy;
        Node* next = NULL;
        while(temp != NULL)
        {
            Node* start = temp;
            Node* end = temp;
            int count = k;
            while(count > 0 &&  end != NULL)
            {
                end = end->next;
                count--;
            }
            if(end == NULL)
            {
                next = NULL;
            }
            else
            {
                next = end;
            }
            prev->next = reverse(start,end);
            start->next = next;
            // end = prev->next;
            // count = k;
            // while(count > 0 &&  end != NULL)
            // {
            //     end = end->next;
            //     count--;
            // }
            // end->next = next;
            prev = start; 
            temp = next;
        }
        return dummy->next;
    }
};