class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        set<char> inp;
        for(int i = 0;i<s.size();i++)
        {
            if(inp.count(s[i]) == 0)
            {
                inp.insert(s[i]);
            }
            else
            {
                string out;
                out.push_back(s[i]);
                return out;
            }
        }
        return to_string(-1);
    }
};