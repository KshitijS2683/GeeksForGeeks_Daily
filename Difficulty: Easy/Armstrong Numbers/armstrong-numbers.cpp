// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        return n == (pow(n%10,3) + pow((n/10)%10,3) + pow((n/100),3));
    }
};