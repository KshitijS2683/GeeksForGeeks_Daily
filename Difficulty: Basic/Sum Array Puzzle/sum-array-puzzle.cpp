class Solution {
  public:
    void sumArray(vector<int> &arr) {
        // code here
        vector<int> prefixsum,postfixsum;
        int sum = 0;
        for(int i = 0;i<arr.size();i++)
        {
            prefixsum.push_back(sum);
            sum += arr[i];
        }
        sum = 0;
        for(int i = arr.size()-1;i>=0;i--)
        {
            postfixsum.push_back(sum);
            sum += arr[i];
        }
        reverse(postfixsum.begin(),postfixsum.end());
        for(int i = 0;i<arr.size();i++)
        {
            arr[i] = prefixsum[i] + postfixsum[i];
        }
    }
};