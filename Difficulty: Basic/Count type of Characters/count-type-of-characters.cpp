class Solution {
  public:
    vector<int> count(string s) {
        // code here.
        vector<int> out = {0,0,0,0};
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] - 'a' < 26 && s[i] - 'a' >= 0)
            {
                out[1]++;
            }
            else if(s[i] - 'A' < 26 && s[i] - 'A' >= 0)
            {
                out[0]++;
            }
            else if(s[i] - '0' <= 9 && s[i] - '0' >= 0)
            {
                out[2]++;
            }
            else
            {
                out[3]++;
            }
        }
        return out;
    }
};