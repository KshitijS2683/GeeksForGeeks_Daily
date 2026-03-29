class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        stack<int> s;
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
        st = s;
    }
};