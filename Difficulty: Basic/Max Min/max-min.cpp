// User function Template for C++

class Solution {
  public:
    int findSum(int A[], int N) {
        // code here.
        int min_value = INT_MAX,max_value = INT_MIN;
        for(int i = 0;i<N;i++)
        {
            min_value = min(A[i],min_value);
            max_value = max(A[i],max_value);
        }
        return min_value + max_value;
    }
};