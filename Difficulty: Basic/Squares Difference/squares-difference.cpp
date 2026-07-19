class Solution {
  public:
    int squaresDiff(int n) {
        // code here
        long long out = 0;
        long long ssum = 0;
        long long sum = 0;
        for(int i = 1;i<=n;i++)
        {
            ssum += i*i;
            sum += i;
        }
        return abs(ssum - sum*sum);
    }
};