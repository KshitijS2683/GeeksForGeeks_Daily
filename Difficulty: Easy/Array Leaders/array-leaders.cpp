class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> out;
        out.push_back(arr.back());
        for(int i = arr.size()-2;i>=0;i--)
        {
            if(arr[i] >= out.back())
            {
                out.push_back(arr[i]);
            }
        }
        reverse(out.begin(),out.end());
        return out;
    }
};