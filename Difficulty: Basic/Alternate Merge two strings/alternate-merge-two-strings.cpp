class Solution {
  public:
    string merge(string s1, string s2) {
        // code here
        int i = 0;
        string out;
        while(i<s1.size() && i<s2.size())
        {
            out.push_back(s1[i]);
            out.push_back(s2[i]);
            i++;
        }
        while(i<s1.size())
        {
            out.push_back(s1[i]);
            i++;
        }
        while(i<s2.size())
        {
            out.push_back(s2[i]);
            i++;
        }
        return out;
        
    }
};