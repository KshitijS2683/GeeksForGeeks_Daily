class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {

        vector<int> out;
        if(root == NULL) return out;

        deque<Node*> dq;
        deque<Node*> q;
        int i = 0;

        q.push_front(root);

        while(!q.empty())
        {
            dq = q;
            q.clear();

            while(!dq.empty())
            {
                Node* node;

                if(i % 2 == 0)
                {
                    node = dq.front();
                    dq.pop_front();

                    if(node->left)
                        q.push_back(node->left);

                    if(node->right)
                        q.push_back(node->right);
                }
                else
                {
                    node = dq.back();
                    dq.pop_back();

                    if(node->right)
                        q.push_front(node->right);

                    if(node->left)
                        q.push_front(node->left);
                }

                out.push_back(node->data);
            }

            i++;
        }

        return out;
    }
};