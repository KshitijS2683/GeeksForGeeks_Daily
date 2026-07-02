class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        if(n == 1)
        {
            return 1;
        }
        for(int i = 0;i<=n;i++)
        {
            if(i*i*i > n)
            {
                return i-1;
            }
        }
        return 0;
    }
    
};