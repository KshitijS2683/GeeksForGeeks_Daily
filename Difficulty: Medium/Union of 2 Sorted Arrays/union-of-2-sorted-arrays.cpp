class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> out;

        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j]) {
                if (out.empty() || out.back() != a[i]) {
                    out.push_back(a[i]);
                }
                i++;
            }
            else if (b[j] < a[i]) {
                if (out.empty() || out.back() != b[j]) {
                    out.push_back(b[j]);
                }
                j++;
            }
            else {
                if (out.empty() || out.back() != a[i]) {
                    out.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        while (i < a.size()) {
            if (out.empty() || out.back() != a[i]) {
                out.push_back(a[i]);
            }
            i++;
        }

        while (j < b.size()) {
            if (out.empty() || out.back() != b[j]) {
                out.push_back(b[j]);
            }
            j++;
        }

        return out;
    }
};