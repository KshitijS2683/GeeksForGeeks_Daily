class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> out;
        out.push_back(arr[0]);
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i] != arr[i-1])
            {
                out.push_back(arr[i]);
            }
        }
        return out;
    }
};