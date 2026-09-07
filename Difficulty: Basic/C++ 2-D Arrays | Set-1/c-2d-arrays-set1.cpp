vector<vector<int>> transpose(int a[][M], int n) {
    // Code here
    vector<vector<int>> out(n,vector<int> (n,0));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            out[i][j] = a[j][i];
        }
    }
    return out;
}
