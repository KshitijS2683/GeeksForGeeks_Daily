class Solution {
  public:
    bool isPerfectSquare(int n) {
        // code here
        for(int i = 0;i<sqrt(n)+1;i++)
        {
            if(i*i == n)
            {
                return true;
            }
        }
        return false;
        // return sqrt(n)*sqrt(n) == n;
    }
};