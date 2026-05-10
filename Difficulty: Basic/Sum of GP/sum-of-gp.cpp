class Solution {
  public:
    long long power(long long base, long long exp) {
        long long result = 1;
        
        while (exp > 0) {
            if (exp % 2 == 1)
                result *= base;
                
            base *= base;
            exp /= 2;
        }
        
        return result;
    }

    long long sum_of_gp(long long n, long long a, long long r) {
        
        // If common ratio is 1
        if (r == 1)
            return a * n;
        
        long long rn = power(r, n);
        
        return a * (rn - 1) / (r - 1);
    }
};