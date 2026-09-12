class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        vector<int> inp = {-1,-1};
        for(int i = arr.size()-1;i>0;i--)
        {
            if(arr[i] == arr[i-1])
            {
                inp[0] = i;
                inp[1] = arr[i];
                break;
            }
        }
        return inp;
    }
};