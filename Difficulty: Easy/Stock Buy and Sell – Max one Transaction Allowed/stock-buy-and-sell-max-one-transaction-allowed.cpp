class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int ans = 0,minv = prices[0];
        for(int i = 1;i<prices.size();i++)
        {
            minv = min(minv,prices[i]);
            ans = max(prices[i] - minv,ans);
        }
        return ans;
    }
};
