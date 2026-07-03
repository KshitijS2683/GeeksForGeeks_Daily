
class Solution {
  public:
    long long int find_fact(int n) {
        // Code here.
        long long out = 1;
        for(int i = n;i>1;i--)
        {
            out *= i;
        }
        return out;
    }
};