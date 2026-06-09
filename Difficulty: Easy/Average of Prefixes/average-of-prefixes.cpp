class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int sum = 0;
        int n = 0;
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            n++;
            sum += arr[i];
            out.push_back(sum/n);
        }
        return out;
    }
};