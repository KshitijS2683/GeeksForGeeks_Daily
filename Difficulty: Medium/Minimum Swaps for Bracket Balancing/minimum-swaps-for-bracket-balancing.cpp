class Solution {
  public:
    int minimumNumberOfSwaps(string& s) {
        // code here
        stack<char> br;
        int swap = 0;
        for(int i = 0;i<s.size();i++)
        {
            if((s[i] == '[' && br.empty()) || 
            (s[i] == '[' && br.top() == '['))
            {
                br.push(s[i]);
            }
            else if(s[i] == ']' && !br.empty() && br.top() == '[' )
            {
                br.pop();
            }
            else if(s[i] == ']' && br.empty() || s[i] == ']' && br.top() == ']')
            {
                br.push(s[i]);
            }
            else if(s[i] == '[' && !br.empty() && br.top() == ']')
            {
                swap += br.size();
                br.pop();
            }
        }
        return swap;
    }
};