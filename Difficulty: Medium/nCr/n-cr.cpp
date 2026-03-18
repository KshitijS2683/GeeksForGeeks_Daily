class Solution {
public:
    int nCr(int n, int r) {
        if (r > n) return 0;

        r = min(r, n - r);
        long long res = 1;

        for (int i = 1; i <= r; i++) {
            res = res * (n - r + i) / i;
        }

        return (int)res;
    }
};