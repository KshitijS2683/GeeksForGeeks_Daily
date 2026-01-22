// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int> out;
        while(!st.empty())
        {
            out.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!out.empty())
        {
            st.push(out.top());
            out.pop();
        }
        return st;
    }
};