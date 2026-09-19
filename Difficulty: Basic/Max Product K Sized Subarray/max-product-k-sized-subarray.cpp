class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        // code here
        int start = 0;
        int end = k-1;
        int prod = 1;
        int max_prod = INT_MIN;
        for(int i  = start;i<=end;i++)
        {
            prod *= arr[i];
            max_prod = max(max_prod,prod);
        }
        for(int i = end+1;i<arr.size();i++)
        {
            prod *= arr[i];
            prod /= arr[i-k];
            max_prod = max(max_prod,prod);
        }
        return max_prod;
    }
};