class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int> inp;
        while(!st.empty())
        {
            inp.push_back(st.top());
            st.pop();
        }
        sort(inp.begin(),inp.end());
        for(int i = 0;i<inp.size();i++)
        {
            st.push(inp[i]);
        }
    }
};
