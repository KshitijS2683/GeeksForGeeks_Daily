class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return m;
        }
        for(int i = 1;i<=m;i++)
        {
            if(pow(i,n) == m)
            {
                return i;
            }
            else if(pow(i,n) > m)
            {
                break;
            }
        }
        return -1;
    }
};