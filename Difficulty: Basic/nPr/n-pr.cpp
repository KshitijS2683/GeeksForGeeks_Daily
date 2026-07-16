class Solution {
  public:
    long long nPr(int n, int r) {
        if (r > n) return 0;

        long long out = 1;
        for (int i = n; i > n - r; i--) {
            out *= i;
        }
        return out;
    }
};