class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>> inp;
        int count = 1;
        for(int i = 0;i<start.size();i++)
        {
            inp.push_back({end[i],start[i]});
        }
        sort(inp.begin(),inp.end());
        int cur_end = inp[0].first;
        for(int i = 1;i<inp.size();i++)
        {
            if(inp[i].second > cur_end)
            {
                count++;
                cur_end = inp[i].first;
            }
        }
        return count;
    }
};