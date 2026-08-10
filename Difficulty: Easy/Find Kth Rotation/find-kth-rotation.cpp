class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        vector<int> diff;
        for(int i = 1;i<arr.size();i++)
        {
            diff.push_back(arr[i]-arr[i-1]);
        }
        for(int i = 0;i<diff.size();i++)
        {
            if(diff[i] < 0)
            {
                return i+1;
            }
        }
        return 0;
    }
};
