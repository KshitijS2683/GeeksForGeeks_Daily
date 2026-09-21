class Solution {
  public:
    vector<int> countArray(vector<int>& arr, int x) {
        // code here
        unordered_map<int,int> inp;
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            inp[arr[i]]++;
        }
        for(int i = 0;i<arr.size();i++)
        {
            int temp = (arr[i] + x)/2;
            out.push_back(inp[temp]);
        }
        return out;
    }
};