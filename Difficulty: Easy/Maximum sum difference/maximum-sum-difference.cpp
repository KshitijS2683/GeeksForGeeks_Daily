// User function Template for C++

class Solution {
  public:
    int maxSum(int N) {
        // code here
        if(N%2 == 0)
        {
            return (N*N)/2 - 1;
        }
        else
        {
            return (N*N -1)/2 - 1;
        }
    }
};