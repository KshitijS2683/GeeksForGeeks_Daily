// User function Template for C++
class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        int sum = 0;
        for(int i = 0;i<mat.size();i++)
        {
            sum += mat[i][i] + mat[i][mat.size()-i-1];
        }
        return sum;
    }
};