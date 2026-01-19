// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int,int>> out;
        Node* start = head;
        Node* end = head;
        while(end->next != NULL)
        {
            end = end->next;
        }
        while(start != end && end->next != start)
        {
            if(start->data + end->data == target)
            {
                out.push_back({start->data,end->data});
                start = start->next;
                end = end->prev;
            }
            else if(start->data + end->data > target)
            {
                end = end->prev;
            }
            else
            {
                start = start->next;
            }
            
        }
        return out;
    }
};