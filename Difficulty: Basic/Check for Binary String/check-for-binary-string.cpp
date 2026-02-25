// Return true if s is binary, else false
class Solution {
  public:
    bool isBinary(string& s) {
        // Your code here
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] != '0' && s[i] != '1')
            {
                return false;
            }
        }
        return true;
    }
};