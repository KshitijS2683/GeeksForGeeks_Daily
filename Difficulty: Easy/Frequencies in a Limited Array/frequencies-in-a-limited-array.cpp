class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> out(arr.size(),0);
        for(int i = 0;i<arr.size();i++)
        {
            out[arr[i]-1]++;
        }
        return out;
    }
};
