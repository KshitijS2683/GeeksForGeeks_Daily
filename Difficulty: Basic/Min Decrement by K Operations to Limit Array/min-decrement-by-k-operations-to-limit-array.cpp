class Solution {
  public:
    int minOps(vector<int>& arr, int k) {
        // code here
        int ans = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] <= k)
            {
                continue;
            }
            else
            {
                int diff = arr[i]-k;
                if(diff%k != 0)
                {
                    ans++;
                }
                ans +=diff/k;
            }
        }
        return ans;
    }
};