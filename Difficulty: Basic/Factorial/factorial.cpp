class Solution {
  public:
    int factorial(int n) {
        // code here
        int out = 1;
        for(int i = n;i>1;i--)
        {
            out *= i;
        }
        return out;
        
    }
};