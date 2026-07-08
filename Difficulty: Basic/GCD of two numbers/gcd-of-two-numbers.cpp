class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int k = min(a,b);
        while(k>1)
        {
            while(b !=0)
            {
                int temp = b;
                
                b = a % b;
                
                a = temp;
            }
            return a;
        }
        return k;
    }
};
