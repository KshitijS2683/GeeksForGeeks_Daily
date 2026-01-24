class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack<int> s1;
        int mid = 0;
        if(s.size()%2 == 0)
        {
            mid = (s.size()+2)/2;
        }
        else
        {
            mid = (s.size()+1)/2;
        }
        for(int i = 0;i<mid;i++)
        {
            s1.push(s.top());
            s.pop();
        }
        s1.pop();
        while(!s1.empty())
        {
            s.push(s1.top());
            s1.pop();
        }
    }
};