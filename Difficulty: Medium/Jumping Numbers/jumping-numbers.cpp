class Solution {
  public:
    long long jumpingNums(long long n) {
        if (n <= 9) {
            return n;
        }

        long long ans = 0;
        queue<long long> q;

        for (int i = 1; i <= 9; i++) {
            q.push(i);
        }

        while (!q.empty()) {
            long long num = q.front();
            q.pop();

            if (num > n) {
                continue;
            }

            ans = max(ans, num);

            int lastDigit = num % 10;

            if (lastDigit > 0) {
                long long nextNum = num * 10 + (lastDigit - 1);
                if (nextNum <= n) {
                    q.push(nextNum);
                }
            }

            if (lastDigit < 9) {
                long long nextNum = num * 10 + (lastDigit + 1);
                if (nextNum <= n) {
                    q.push(nextNum);
                }
            }
        }

        return ans;
    }
};