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
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        Node* temp;
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            temp = arr[i];
            while(temp->next != NULL)
            {
                out.push_back(temp->data);
                temp = temp->next;
            }
            out.push_back(temp->data);
            if(i != arr.size()-1)
            {
                temp->next = arr[i+1];
            }
        }
        sort(out.begin(),out.end());
        temp = arr[0];
        int i = 0;
        while(temp != NULL)
        {
            temp->data = out[i];
            i++;
            temp = temp->next;
        }
        return arr[0];
    }
};