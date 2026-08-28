class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int left = 0 , right = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(i < arr.size()/2)
            {
                left += arr[i];
            }
            else
            {
                right += arr[i];
            }
        }
        return left * right;
    }
};