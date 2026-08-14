
class Solution {
  public:
    int countWays(int n) {
        //  code here
        vector<int> scores = {3,5,10};
        vector<long> dp(n+1,0);
        dp[0] = 1;
        for(int i = 0;i<scores.size();i++)
        {
            for(int j = scores[i];j<=n;j++)
            {
                dp[j] += dp[j-scores[i]];
            }
        }
        return dp[n];
    }
};