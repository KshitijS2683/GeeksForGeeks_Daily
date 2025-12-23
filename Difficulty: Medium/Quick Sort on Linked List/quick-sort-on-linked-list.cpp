/* a node of the singly linked list
struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */

// Solution class with quickSort function
class Solution {
  public:
  
    struct Node* quickssort(struct Node* head,struct Node* end)
    {
        if (head == NULL || head == end || head->next == end)
        {
            return head;
        }
        Node* pivot = head;
        Node* temp = head->next;
        Node* templow = head;
        while(temp != end)
        {
            if(temp->data > pivot->data)
            {
                temp = temp->next;
            }
            else
            {
                templow = templow->next;
                int t = temp->data;
                temp->data = templow->data;
                templow->data = t;
                temp = temp->next;
            }
        }
        int t = templow->data;
        templow->data = pivot->data;
        pivot->data = t;
        pivot = templow;
        head = quickssort(head,pivot);
        pivot->next = quickssort(pivot->next,end);
        return head;
        
    }
  
    
    struct Node* quickSort(struct Node* head) {
        head = quickssort(head,NULL);
        return head;
    }
};