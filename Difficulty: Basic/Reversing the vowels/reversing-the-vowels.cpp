class Solution {
  public:
    string modify(string& s) {
        // code here.
        vector<char> inp;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
            || s[i] == 'u')
            {
                inp.push_back(s[i]);
            }
        }
        int k = inp.size()-1;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
            || s[i] == 'u')
            {
                s[i] = inp[k--];
            }
        }
        return s;
    }
};
