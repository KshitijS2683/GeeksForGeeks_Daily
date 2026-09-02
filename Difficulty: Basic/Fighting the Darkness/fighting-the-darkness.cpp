class Solution {
  public:
    int maxDays(vector<int> &arr) {
        // code here
        return *max_element(arr.begin(),arr.end());
    }
};