class Solution {
  public:
    long long maxBalls(int n, int m, vector<int> a, vector<int> b) {
        int i = 0, j = 0;
        long long sum_a = 0, sum_b = 0;

        while (i < n && j < m) {
            if (a[i] < b[j]) {
                sum_a += a[i++];
            }
            else if (b[j] < a[i]) {
                sum_b += b[j++];
            }
            else {
                int x = a[i];
                int cnt1 = 0, cnt2 = 0;

                while (i < n && a[i] == x) { cnt1++; i++; }
                while (j < m && b[j] == x) { cnt2++; j++; }

                long long aa, ab, ba, bb;
                if (cnt1 == 1 && cnt2 == 1) {
                    aa = ab = ba = bb = x;
                } else {
                    ab = ba = 1LL * x * (cnt1 + cnt2 - 1);
                    aa = bb = 1LL * x * (cnt1 + cnt2 - 2);
                }

                long long sum1 = max(sum_a + aa, sum_b + ba);
                long long sum2 = max(sum_a + ab, sum_b + bb);

                sum_a = sum1;
                sum_b = sum2;
            }
        }

        while (i < n) sum_a += a[i++];
        while (j < m) sum_b += b[j++];

        return max(sum_a, sum_b);
    }
};