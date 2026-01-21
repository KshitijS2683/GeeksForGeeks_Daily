class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        // code here
        int max_limit = INT_MIN;
        for(int i = 0;i<arr.size();i++)
        {
            max_limit = max(max_limit,arr[i][1]);
        }
        vector<int> inp(max_limit+2,0);
        for(int i = 0;i<arr.size();i++)
        {
            inp[arr[i][0]]++;
            inp[arr[i][1]+1]--;
        }
        int sum = 0,max_sum =INT_MIN;
        for(int i = 0;i<max_limit+1;i++)
        {
            sum += inp[i];
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};
