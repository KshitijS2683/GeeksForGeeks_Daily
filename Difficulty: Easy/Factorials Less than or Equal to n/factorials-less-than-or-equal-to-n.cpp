// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> out;

        long long curr = 1;

        for(long long i = 1; ; i++) {
            if(curr > n / i) {
                break;
            }

            curr *= i;
            out.push_back(curr);
        }

        return out;
    }
};