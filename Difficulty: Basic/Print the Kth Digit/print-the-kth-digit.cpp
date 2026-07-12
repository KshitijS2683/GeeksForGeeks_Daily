class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long long mod = 1;
        for(int i = 1;i<=k;i++)
        {
            mod *= 10;
        }
        long long curr = 1;
        for(int i = 1;i<=b;i++)
        {
            curr *= a;
            curr = curr%mod;
        }
        mod /= 10;
        return curr/mod;
    }
};