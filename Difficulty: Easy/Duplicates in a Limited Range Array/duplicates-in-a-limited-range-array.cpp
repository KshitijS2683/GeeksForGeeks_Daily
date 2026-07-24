class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> ind(arr.size(),0);
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            if(!ind[arr[i] - 1])
            {
                ind[arr[i] - 1] = 1;
            }
            else
            {
                out.push_back(arr[i]);
            }
        }
        return out;
    }
};