class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        // Code here
        vector<int> inp(10,0);
        vector<int> out;
        for(int i = 0;i<arr.size();i++)
        {
            while(arr[i] > 0)
            {
                inp[arr[i]%10] = 1;
                arr[i] /= 10;
            }
        }
        for(int i = 0;i<inp.size();i++)
        {
            if(inp[i] == 1)
            {
                out.push_back(i);
            }
        }
        return out;
    }
};