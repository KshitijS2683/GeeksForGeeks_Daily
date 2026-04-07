// User function Template for C++

class Solution {
  public:
    int product(int arr[], int n) {
        long long out = 1;
        for(int i = 0;i<n;i++)
        {
            out *= arr[i];
        }
        return out;
    }
};