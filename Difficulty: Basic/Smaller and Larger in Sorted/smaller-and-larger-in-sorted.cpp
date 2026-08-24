class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        vector<int> out(2,0);
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] < target)
            {
                out[0]++;
            }
            else if(arr[i] == target)
            {
                out[0]++;
                out[1]++;
            }
            else
            {
                out[1]++;
            }
        }
        return out;
    }
};