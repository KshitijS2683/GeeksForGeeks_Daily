class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        int out = 0;
        for(int i = 0;i<b.size();i++)
        {
            out = out*2 + (b[i] - '0');
        }
        return out;
    }
};