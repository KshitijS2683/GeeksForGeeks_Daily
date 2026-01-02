// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        vector<int> count;
        vector<pair<int,int>> inp;
        for(int i = 0;i<F.size();i++)
        {
            inp.push_back({F[i],i});
        }
        sort(inp.begin(),inp.end());
        int finish = inp[0].first;
        count.push_back(inp[0].second+1);
        for(int i = 1;i<inp.size();i++)
        {
            if(S[inp[i].second] > finish)
            {
                count.push_back(inp[i].second+1);
                finish = inp[i].first;
            }
        }
        sort(count.begin(),count.end());
        return count;
    }
};