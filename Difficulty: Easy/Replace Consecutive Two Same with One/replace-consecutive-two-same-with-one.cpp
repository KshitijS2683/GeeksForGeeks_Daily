class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string out;
        out.push_back(s[0]);
        for(int i = 1;i<s.size();i++)
        {
            if(s[i] != out.back())
            {
                out.push_back(s[i]);
            }
        }
        return out;
    }
};