class Solution {
  public:
    void solve(int idx,
               vector<vector<string>>& list,
               vector<string>& curr,
               vector<vector<string>>& out)
    {
        if(idx == list.size())
        {
            out.push_back(curr);
            return;
        }

        for(int i = 0; i < list[idx].size(); i++)
        {
            curr.push_back(list[idx][i]);
            solve(idx + 1, list, curr, out);
            curr.pop_back();
        }
    }

    vector<vector<string>> sentences(vector<vector<string>>& list) {
        vector<vector<string>> out;
        vector<string> curr;

        solve(0, list, curr, out);

        return out;
    }
};