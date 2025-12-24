// User function Template for C++
class Solution {
  public:
     int countTriplets(struct Node* head, int x) {
        unordered_map<int, bool> mp;
        Node* curr = head;
        int count = 0;
        
        while (curr != NULL) {
            mp[curr->data] = true;
            curr = curr->next;
        }
    
        for (Node* first = head; first != NULL; first = first->next) {
            for (Node* second = first->next; second != NULL; second = second->next) {
                int num = x - (first->data + second->data);
                
                if (mp.find(num) != mp.end()) {
                    Node* third = second->next;
                    while (third != NULL) {
                        if (third->data == num) {
                            count++;
                            break;  
                        }
                        third = third->next;
                    }
                }
            }
        }
    
        return count;
    }
};