class Solution {
  public:
    vector<vector<int>> solve(int n, int p, vector<int> a,
                              vector<int> b, vector<int> d) {

        vector<int> to(n+1, 0), dia(n+1, 0), indeg(n+1, 0);

        // build graph
        for(int i = 0; i < p; i++) {
            to[a[i]] = b[i];
            dia[a[i]] = d[i];
            indeg[b[i]]++;
        }

        vector<vector<int>> ans;

        for(int i = 1; i <= n; i++) {
            if(indeg[i] == 0 && to[i] != 0) {
                int cur = i;
                int minDia = INT_MAX;

                while(to[cur] != 0) {
                    minDia = min(minDia, dia[cur]);
                    cur = to[cur];
                }

                ans.push_back({i, cur, minDia});
            }
        }

        return ans;
    }
};
