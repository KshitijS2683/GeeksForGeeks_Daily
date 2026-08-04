class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size() != b.size())
        {
            return false;
        }
        unordered_map<int,int> a1,b1;
        for(int i = 0;i<a.size();i++)
        {
            a1[a[i]]++;
            b1[b[i]]++;
        }
        return a1 == b1;
    }
};