class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        set<int> inp;
        int sum = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(inp.count(arr[i]) == 0)
            {
                inp.insert(arr[i]);
                sum += arr[i];
            }
        }
        return sum;
    }
};