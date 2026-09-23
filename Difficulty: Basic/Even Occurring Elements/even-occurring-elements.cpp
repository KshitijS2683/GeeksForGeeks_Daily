class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        unordered_map<int,int> inp;
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            inp[arr[i]]++;
        }
        for(int i = 0;i<arr.size();i++)
        {
            if(inp[arr[i]]%2 == 0)
            {
                out.push_back(arr[i]);
                inp[arr[i]] = 1;
            }
        }
        if(out.empty())
        {
            out.push_back(-1);
        }
        return out;
    }
};
