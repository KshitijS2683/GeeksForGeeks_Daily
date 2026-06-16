// User function template for C++
class Solution {
  public:

    bool fascinating(int n) {
        // code here
        if(n<100)
        {
            return false;
        }
        int two = n*2,three = n*3;
        string s = to_string(n) + to_string(two) + to_string(three);
        vector<int> out(10,0);
        for(int i = 0;i<s.size();i++)
        {
            out[s[i]-'0']++;
        }
        for(int i = 1;i<out.size();i++)
        {
            if(out[i] != 1)
            {
                return false;
            }
        }
        return true;
    }
};