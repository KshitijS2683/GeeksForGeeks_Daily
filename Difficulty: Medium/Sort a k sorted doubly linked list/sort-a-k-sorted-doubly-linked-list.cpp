// User function Template for C++

/*
// a node of the doubly linked list
class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        if(head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        DLLNode* temp = head;
        DLLNode* dummy = new DLLNode(-1);
        DLLNode* temp2 = dummy;
        while(k>0 && temp != NULL)
        {
            pq.push(temp->data);
            temp = temp->next;
            k--;
        }
        while(temp != NULL)
        {
            if(temp->data < pq.top())
            {
                DLLNode* next = new DLLNode(temp->data);
                temp2->next = next;
                next->prev = temp2;
                temp2 = temp2->next;
                temp = temp->next;
                continue;
            }
            int a = pq.top();
            pq.pop();
            pq.push(temp->data);
            DLLNode* next = new DLLNode(a);
            temp2->next = next;
            next->prev = temp2;
            temp2 = temp2->next;
            temp = temp->next;
        }
        while(!pq.empty())
        {
            int a = pq.top();
            pq.pop();
            DLLNode* next = new DLLNode(a);
            temp2->next = next;
            next->prev = temp2;
            temp2 = temp2->next;
        }
        return dummy->next;
        
        // while(temp != NULL)
        // {
        //     int rem = k;
        //     int min_value;
        //     DLLNode* temp2 = temp;
        //     while(rem>=0 && temp2 != NULL)
        //     {
        //         if(temp2->data < temp->data)
        //         {
        //             int t = temp2->data;
        //             temp2->data = temp->data;
        //             temp->data = t;
        //         }
        //         temp2 = temp2->next;
        //         rem--;
        //     }
        //     temp = temp->next;
        // }
        // return head;
        
    }
};