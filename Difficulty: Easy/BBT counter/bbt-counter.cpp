// User function Template for C++
class Solution {
  public:
    int countBT(int h) {
        // code here
        const long long MOD = 1000000007;
        if(h == 0 || h==1)
        {
            return 1;
            
        }
        long long prev1 = 1;
        long long prev2 = 1;
        long long curr = 0;
        for(int i = 2;i<=h;i++)
        {
            curr = (prev1*prev1)%MOD + ((2*prev1*prev2)%MOD)%MOD;
            prev2 = prev1;
            prev1 = curr;
        }
        return (int)prev1;
    }
};