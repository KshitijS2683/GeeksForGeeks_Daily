class Solution {
  public:
    int closestNumber(int n, int m) {
        int d = abs(m);   // divisibility by m and abs(m) is same

        int q = n / d;

        int num1 = q * d;  // closest multiple toward 0
        int num2;

        if (n >= 0) {
            num2 = (q + 1) * d;
        } else {
            num2 = (q - 1) * d;
        }

        int diff1 = abs(n - num1);
        int diff2 = abs(n - num2);

        if (diff1 < diff2) {
            return num1;
        }
        else if (diff2 < diff1) {
            return num2;
        }
        else {
            // If tie, return number with maximum absolute value
            if (abs(num1) > abs(num2)) {
                return num1;
            } else {
                return num2;
            }
        }
    }
};