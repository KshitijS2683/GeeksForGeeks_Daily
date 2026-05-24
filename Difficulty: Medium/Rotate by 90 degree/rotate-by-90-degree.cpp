class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        for(int i = 0; i < mat.size(); i++)
        {
            reverse(mat[i].begin(), mat[i].end());
        }

        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = i + 1; j < mat.size(); j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
};