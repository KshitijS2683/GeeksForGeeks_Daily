class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        // code here
        vector<int> out;
        for(int i = 1;i<arr.size();i++)
        {
            out.push_back(max(arr[i],arr[i-1]));
        }
        return out;
    }
};