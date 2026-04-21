class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        unordered_map<int, vector<int>> inpA, inpB;
        int length = sizeof(A) / sizeof(A[0]);
        for (int i = 0; i < (e+e); i += 2) {
            inpA[A[i]].push_back(A[i + 1]);
            inpB[B[i]].push_back(B[i + 1]);
        }

        for (auto &x : inpA) {
            reverse(x.second.begin(), x.second.end());
        }

        return inpA == inpB;
    }
};