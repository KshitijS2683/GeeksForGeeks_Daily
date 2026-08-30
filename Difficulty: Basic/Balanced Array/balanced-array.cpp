class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        // code here
        int left = 0,right = 0;
        int i = 0 , j = arr.size()-1;
        while(i<j)
        {
            left += arr[i++];
            right += arr[j--];
        }
        return abs(left - right);
    }
};
