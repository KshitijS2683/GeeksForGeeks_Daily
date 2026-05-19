class Solution {
  public:
    bool check(const unordered_map<int, vector<int>> &inp, int start, int target)
    {
        if (start == target)
            return true;

        auto it = inp.find(start);

        if (it == inp.end())
            return false;

        for (int child : it->second)
        {
            if (check(inp, child, target))
                return true;
        }

        return false;
    }

    void buildTree(vector<vector<int>> &g,
                   unordered_map<int, vector<int>> &inp,
                   int node,
                   int parent)
    {
        for (int child : g[node])
        {
            if (child == parent)
                continue;

            inp[node].push_back(child);
            buildTree(g, inp, child, node);
        }
    }

    vector<string> isInSubtree(vector<vector<int>> &g, int n, int q,
                               vector<vector<int>> queries) {
        unordered_map<int, vector<int>> inp;
        vector<string> out;

        // g is already adjacency list.
        // Build parent -> child tree rooted at 1.
        buildTree(g, inp, 1, 0);

        for (int i = 0; i < q; i++)
        {
            // query: is queries[i][0] in subtree of queries[i][1]?
            if (check(inp, queries[i][1], queries[i][0]))
                out.push_back("YES");
            else
                out.push_back("NO");
        }

        return out;
    }
};