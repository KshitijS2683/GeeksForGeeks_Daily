class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int out = 0;
        for(int i = 0;i<arr.size();i++)
        {
            out = out ^ arr[i];
        }
        return out;
    }
};