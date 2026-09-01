class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        set<int> inp;
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            if(inp.count(arr[i]) == 0)
            {
                out.push_back(arr[i]);
            }
            inp.insert(arr[i]);
        }
        return out;
    }
};