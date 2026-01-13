class Solution {
public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        sort(x.begin(), x.end(), greater<int>());
        sort(y.begin(), y.end(), greater<int>());

        int i = 0, j = 0;
        long long cost = 0;

        while (i < x.size() || j < y.size()) {
            if (j == y.size() || (i < x.size() && x[i] > y[j])) {
                cost += x[i] * (j + 1);
                i++;
            } else {
                cost += y[j] * (i + 1);
                j++;
            }
        }
        return cost;
    }
};
