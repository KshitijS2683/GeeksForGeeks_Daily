class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        vector<int> prefixSum;
        int sum = 0;
        for(int i = 0;i<arr.size();i++)
        {
            prefixSum.push_back(sum);
            sum += arr[i];
        }
        for(int i = 0;i<arr.size();i++)
        {
            int diff = sum - prefixSum[i] - arr[i];
            if(prefixSum[i] == diff)
            {
                return i;
            }
        }
        return -1;
    }
};