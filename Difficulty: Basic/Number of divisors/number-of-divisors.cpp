// User function Template for C++

class Solution {
  public:
    int countDivisors(int n) {
        // Code here.
        int count = 0;
        for(int i = 3;i<=n;i = i+3)
        {
            if(n%i == 0)
            {
                count++;
            }
        }
        return count;
    }
};