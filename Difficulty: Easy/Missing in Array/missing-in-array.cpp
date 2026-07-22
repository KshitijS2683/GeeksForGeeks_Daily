class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int out;
        for(int i = 0;i<n;i++)
        {
            out ^= arr[i];
        }
        for(int i = 1;i<=n+1;i++)
        {
            out ^= i;
        }
        return out;
    }
};