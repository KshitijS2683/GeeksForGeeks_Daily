class Solution {
  public:
    string getBinaryRep(int n) {
        // Write Your Code here
        string out(32, '0');
        int k = 31;
        while(n > 0)
        {
            out[k--] = n%2 + '0';
            n = n/2;
        }
        return out;
    }
};