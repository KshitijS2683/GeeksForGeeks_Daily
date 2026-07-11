class Solution {
  public:
    int nthTerm(int a, int r, int n) {
        const int MOD = 1000000007;

        long long ans = 1;
        long long base = r;
        int power = n - 1;

        while (power > 0) {
            if (power % 2 == 1) {
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;
            power /= 2;
        }

        return (a * ans) % MOD;
    }
};