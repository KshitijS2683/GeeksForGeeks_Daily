/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        // code here
        if(head == NULL)
        {
            return NULL;
        }
        Node *head2 = new Node(head->data);
        Node *temp2 = head2;
        // if(head->next == NULL)
        // {
        //     return head2;
        // }
        Node *temp = head->next;
        vector<Node*> ran;
        ran.push_back(head->random);
        while(temp != NULL)
        {
            ran.push_back(temp->random);
            temp = temp->next;
        }
        int i = 0;
        while(i<ran.size())
            {
                if(ran[i] == head)
                {
                    ran[i] = head2;
                }
                i++;
            }
        temp = head->next;
        while(temp != NULL)
        {
            Node *next = new Node(temp->data);
            temp2->next = next;
            int i = 0;
            temp2 = temp2->next;
            while(i<ran.size())
            {
                if(ran[i] == temp)
                {
                    ran[i] = temp2;
                }
                i++;
            }
            temp = temp->next;
        }
        
        temp2 = head2;
        // Node *temp1 = head;
        // while(temp2 != NULL && temp1 != NULL)
        // {
        //     // Node *curr = temp2;
        //     // while(curr != NULL && curr != temp1->random)
        //     // {
        //     //     curr = curr->next;
        //     //     if(curr == NULL)
        //     //     {
        //     //         curr = head2;
        //     //     }
        //     // }
        //     temp2->random = temp1->random;
        //     temp2 = temp2->next;
        //     temp1 = temp1->next;
        // }
        i = 0;
        while(temp2 != NULL && i<ran.size())
        {
            temp2->random = ran[i];
            temp2 = temp2->next;
            i++;
        }
        return head2;
    }
};