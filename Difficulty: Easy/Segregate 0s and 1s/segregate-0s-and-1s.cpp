class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int zeroes = 0,ones = 0;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        for(int i = 0;i<zeroes;i++)
        {
            arr[i] = 0;
        }
        for(int i = arr.size();i>=zeroes;i--)
        {
            arr[i] = 1;
        }
    }
};