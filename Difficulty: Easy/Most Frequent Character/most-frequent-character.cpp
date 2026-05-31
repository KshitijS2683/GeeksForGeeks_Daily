class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        unordered_map<char,int> inp;
        int mout = INT_MIN;
        char out;
        for(int i = 0;i<s.size();i++)
        {
            inp[s[i]]++;
        }
        for(auto &x : inp)
        {
            if(x.second > mout)
            {
                mout = x.second;
                out = x.first;
            }
            else if(x.second == mout && x.first < out)
            {
                mout = x.second;
                out = x.first;
            }
            
        }
        return out;
    }
};