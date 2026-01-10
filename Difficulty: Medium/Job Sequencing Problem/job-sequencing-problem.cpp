class Solution {
  public:
    vector<int> parent;

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {

        int n = deadline.size();
        int maxD = *max_element(deadline.begin(), deadline.end());

        vector<pair<int,int>> jobs;
        for (int i = 0; i < n; i++)
            jobs.push_back({profit[i], deadline[i]});

        sort(jobs.begin(), jobs.end(), greater<>());

        parent.resize(maxD + 1);
        for (int i = 0; i <= maxD; i++)
            parent[i] = i;

        int count = 0, total_profit = 0;

        for (auto &job : jobs) {
            int slot = find(job.second);
            if (slot > 0) {
                count++;
                total_profit += job.first;
                parent[slot] = find(slot - 1);
            }
        }

        return {count, total_profit};
    }
};
