class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second = INT_MIN,first=INT_MIN;
        for(int i = 0;i<arr.size();i++)
        {
            if(arr[i] > first)
            {
                second = first;
                first = arr[i];
            }
            else if(arr[i] == first)
            {
                continue;
            }
            else if(arr[i] > second)
            {
                second = arr[i];
            }
        }
        if(second == INT_MIN)
        {
            return -1;
        }
        return second;
    }
};