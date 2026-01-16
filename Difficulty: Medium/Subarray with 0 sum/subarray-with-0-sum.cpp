class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> inp;
        int sum = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
                return true;
            }
            sum += arr[i];
            if(inp[sum] || sum == 0)
            {
                return true;
            }
            else
            {
                inp[sum]++;
            }
        }
        return false;
    }
};