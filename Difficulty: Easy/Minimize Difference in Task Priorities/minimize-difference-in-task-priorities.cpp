class Solution {
  public:
    int minDiff(vector<int>& arr, int k, int m, int t) {
        int n = arr.size();

        if (k <= 0 || k > n || m < 0 || m > k) return -1;

        sort(arr.begin(), arr.end());

        vector<int> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (arr[i] >= t);
        }

        int ans = INT_MAX;

        for (int l = 0; l + k - 1 < n; l++) {
            int r = l + k - 1;

            int countGreaterOrEqualT = pref[r + 1] - pref[l];

            if (countGreaterOrEqualT >= m) {
                ans = min(ans, arr[r] - arr[l]);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};