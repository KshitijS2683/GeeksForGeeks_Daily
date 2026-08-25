
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int temp = arr[n-k];
        arr[n-k] = arr[k-1];
        arr[k-1] = temp;
    }
};
