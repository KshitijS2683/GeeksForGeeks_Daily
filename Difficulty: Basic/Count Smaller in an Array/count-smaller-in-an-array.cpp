class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int ans;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] <= x)
            {
                ans++;
            }
        }
        return ans;
    }
};