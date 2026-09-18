class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // code here
        unordered_map<int,int> inp;
        for(int i = 0;i<arr1.size();i++)
        {
            inp[arr1[i]]++;
        }
        for(int i = 0;i<arr2.size();i++)
        {
            inp[arr2[i]]--;
        }
        for(auto &x : inp)
        {
            if(x.second == 1)
            {
                return x.first;
            }
        }
    }
};