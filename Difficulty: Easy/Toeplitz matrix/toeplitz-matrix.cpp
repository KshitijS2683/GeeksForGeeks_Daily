class Solution {
public:
    bool isToeplitz(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        for(int i = 0; i < rows; i++)
        {
            int k = i;
            int j = 0;
            int a = mat[i][0];

            while(k < rows && j < cols)
            {
                if(mat[k][j] != a)
                {
                    return false;
                }
                k++;
                j++;
            }
        }

        for(int i = 0; i < cols; i++)
        {
            int k = i;
            int j = 0;
            int a = mat[0][i];

            while(j < rows && k < cols)
            {
                if(mat[j][k] != a)
                {
                    return false;
                }
                k++;
                j++;
            }
        }

        return true;
    }
};