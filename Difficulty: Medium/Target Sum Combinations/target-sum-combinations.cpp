class Solution {
  public:

    void find(vector<int> &arr,
              int target,
              set<vector<int>> &out,
              vector<int> &curr,
              int index,
              int sum)
    {
        if(sum > target)
            return;

        if(sum == target)
        {
            out.insert(curr);
            return;
        }

        if(index >= arr.size())
            return;

        // Take current element (allow reuse)
        curr.push_back(arr[index]);

        find(arr,target,out,
             curr,index,
             sum + arr[index]);

        curr.pop_back();

        // Skip current element
        find(arr,target,out,
             curr,index+1,sum);
    }

    vector<vector<int>> targetSumComb(
    vector<int> &arr,
    int target)
    {
        set<vector<int>> out;
        vector<vector<int>> output;
        vector<int> curr;

        find(arr,target,out,curr,0,0);

        for(auto &x : out)
            output.push_back(x);

        return output;
    }
};